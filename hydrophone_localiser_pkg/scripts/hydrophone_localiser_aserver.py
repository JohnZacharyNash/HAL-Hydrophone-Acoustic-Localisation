#!/usr/bin/env python3
# Copyright 2021 The HAL Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ===============================================================================
"""A ROS Python Action Server for localising targets via acoustic data, providing a distance and heading for the ROS Network."""

import rclpy
import pandas as pd
import numpy as np
import io
import ast
import peakdetect
from rclpy.action import ActionServer
from rclpy.node import Node
from hydrophone_localiser_pkg.action import Hydrophonelocalise
from std_msgs.msg import String
from std_msgs.msg import Int32MultiArray
from std_msgs.msg import Float32

class HydrophoneLocaliserAServer(Node):
    """
    Hydrophone Localiser Action Server Class
    Calls functionality of the action server. Subscribes to data published by the hydrophone processor action server. Data is then processed into a heading and distance
    
    """

    def __init__(self):
        """
        Class Constructor. Starts the action server node
        """
        super().__init__('hydrophone_localiser_aserver')
        self.action_server = ActionServer(
            self,
            Hydrophonelocalise,
            'hydrophonelocaliser',
            self.execute_callback
        )
        self.samp_rate = 192000
        self.heading_publisher = self.create_publisher(String, 'target_heading', 10)
        self.distance_publisher = self.create_publisher(Float32, 'target_distance', 10)
        self.channel_one_data = ""
        self.channel_two_data = ""
        self.channel_three_data = ""
        
        

    def execute_callback(self, goal_handle):
        """
        ROS Callback function for processing accepted goals. This function carries out server functionality when connection to client is made.
        In this case, TODO

        Args:
            goal_handle ([ROS Goal]): [Allows for the functionality of goals, such as the ability to cancel them]
        """
        self.get_logger().info('Client request recieved...')
        
        
        hydrophone_one_peak = self.create_subscription(
            Int32MultiArray,
            'hydrophonepeakone',
            self.c1_listener_callback,
            10
        )
        hydrophone_two_peak = self.create_subscription(
            Int32MultiArray,
            'hydrophonepeaktwo',
            self.c2_listener_callback,
            10
        )
        hydrophone_three_peak = self.create_subscription(
            Int32MultiArray,
            'hydrophonepeakthree',
            self.c3_listener_callback,
            10
        )
        self.get_logger().info('Subscriptions created...')

        if goal_handle.request.request == 'distance':
            distance = self.get_distance(self.channel_one_data,self.channel_two_data,self.channel_three_data)
            distmsg = Float32()
            distmsg.data = float(distance)
            self.distance_publisher.publish(distmsg)

        elif goal_handle.request.request == 'heading':
            heading, sample_difference = self.get_heading(self.channel_one_data,self.channel_two_data,self.channel_three_data)
            headmsg = String()
            headmsg.data = heading
            self.heading_publisher.publish(headmsg)

        elif goal_handle.request.request == 'both':
            distance = self.get_distance(self.channel_one_data,self.channel_two_data,self.channel_three_data)
            heading, sample_difference = self.get_heading(self.channel_one_data,self.channel_two_data,self.channel_three_data)
            distmsg = Float32()
            distmsg.data = float(distance)
            self.distance_publisher.publish(distmsg)
            headmsg = String()
            headmsg.data = heading
            self.heading_publisher.publish(headmsg)
            
        else:
            self.get_logger().info('Error in goal request. Request distance or heading.')

        
        result = Hydrophonelocalise.Result()
        return result


    def get_distance(self,c_one,c_two,c_three):
        """gets distance from the target. In this version of HAL, some heading calculations are required to gain distance,
        and therefore a call to the get_heading function is required


        Args:
            Channels One, Two and Three

        Returns:
            str: distance from target
        """

        heading, sample_difference = self.get_heading(c_one,c_two,c_three)
        time_from_target = sample_difference/self.samp_rate
        distance_from_target = time_from_target*1500 #1500msg the speed of sound through water
        self.get_logger().info('We are currently {0:.2f}m from the target'.format(distance_from_target))
        dist = round(distance_from_target, 2)
        distance = str(dist) #TODO 
        return distance



    def get_heading(self,c_one,c_two,c_three):
        """Takes all three channels and calculates what heading the target is in relation to the vehicle.

        Args:
            Channels one, two and three

        Returns:
            str: what direction the target is
        """

        if self.target_heard(c_one,c_two,c_three) == True:
            ping_one,ping_two,ping_three = self.convert_pings(c_one,c_two,c_three)
            time_a,time_b,time_c = self.time_difference(ping_one,ping_two,ping_three)
            if((time_a<time_b) and (time_a<time_c)):
                sample_difference = time_a
                self.get_logger().info('heading is correct')
                next_heading = "forward"
            elif ((time_b<time_a) and (time_b<time_c)):
                sample_difference = time_b
                next_heading = "right"
                self.get_logger().info('turn right')
            elif ((time_c < time_a) and (time_c < time_b)):
                sample_difference = time_c
                self.get_logger().info('turn left')
                next_heading = "left"
            else:
                self.get_logger().info('Unable to locate target')
            
            return next_heading, sample_difference

        else:
            self.get_logger().info('No target located!')





    def target_heard(self,c_one,c_two,c_three):
        """Checks to see if targets have been heard through acoustic data

        Args:
            c_one (array): Channel One Array
            c_two (array): Channel Two Array
            c_three (array): Channel Three Array

        Returns:
            bool: has the target been heard
        """
        

        if(not self.enquiry(c_one).size):
            self.get_logger().info('No target detected from channel one')
            return False
        elif (not self.enquiry(c_two).size):
            self.get_logger().info('No target detected from channel two')
            return False
        elif (not self.enquiry(c_three).size):
            self.get_logger().info('No target detected from channel three')
            return False
        else:
            return True
            


    def enquiry(self,chan):
        """converts channels into correct type

        """

        return(np.array(chan))
    
    def convert_pings(self, c_one, c_two, c_three):
        """Converts pings into a meaningful format that can be deduced into headings and distances

        Args:
            c_one (array): Channel One Array
            c_two (array): Channel Two Array
            c_three (array): Channel Three Array

        Returns:
            int: three converted pings
        """


        first_channel_peak = str(c_one[0][0])
        ping_one, value_one = first_channel_peak.split(',')
        second_channel_peak = str(c_two[0][0]).strip('[]')
        ping_two, value_two = second_channel_peak.split(',')
        third_channel_peak = str(c_three[0][0]).strip('[]')
        ping_three, value_three = third_channel_peak.split(',')
        self.get_logger().info("%s %s %s peaks", ping_one[1:], ping_two[1:],ping_three[1:])
        ping_one = int(ping_one[1:])
        ping_two = int(ping_two[1:])
        pint_three = int(ping_three[1:])
        return ping_one, ping_two, ping_three

    def time_difference(self,p1,p2,p3):
        """calculates time difference between which hydrophone recieved the signal first    

        Args:
           int: pings
        Returns:
            int: returns the time difference between the hydrohpones
        """
        
        if (p1 > p2):
            diff_a = p1 - p2
        elif (p2 > p1):
            diff_a = p2 - p1
        if (p2 > p3):
            diff_b = p2 - p3
        elif (p3 > p2):
            diff_b = p3 - p2
        if (p1 > p3):
            diff_c = p1 - p3
        elif (p3 > p1):
            diff_c = p3 - p1
        
        return diff_a, diff_b, diff_c




    def c1_listener_callback(self, msg):
        """ROS Callback function for subscriptions. This is used to assign message data locally.

        Args:
            msg ([String]): [Hydrophonedataraw published from hydrophone_streamer_aserver.py is subscribed to here.]

        """
        self.channel_one_data = msg.data
    
    def c2_listener_callback(self, msg):
        """ROS Callback function for subscriptions. This is used to assign message data locally.

        Args:
            msg ([String]): [Hydrophonedataraw published from hydrophone_streamer_aserver.py is subscribed to here.]

        """
        self.channel_two_data = msg.data
    
    def c3_listener_callback(self, msg):
        """ROS Callback function for subscriptions. This is used to assign message data locally.

        Args:
            msg ([String]): [Hydrophonedataraw published from hydrophone_streamer_aserver.py is subscribed to here.]

        """
        self.channel_three_data = msg.data
    
        

        

def main(args=None):
    rclpy.init(args=args)
    hydrophone_localiser_aserver = HydrophoneLocaliserAServer()
    rclpy.spin(hydrophone_localiser_aserver)



if __name__ == '__main__':
    main()
