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
"""A ROS Python Action Server for processing raw acoustic data into a more manageable format and publishing it to the ROS Network."""

import rclpy
import pandas as pd
import io
import ast
import peakdetect
from io import StringIO
from rclpy.action import ActionServer
from rclpy.node import Node
from hydrophone_streamer_pkg.action import Hydrophoneraw
from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray

try:
    from StringIO import StringIO
except ImportError:
    from io import StringIO

class HydrophoneProcessorAServer(Node):
    """
    Hydrophone Streamer Action Server Class
    Calls functionality of the action server. Subscribes to data published by the hydrophone streamer action server. Data is then processed to
    remove TODO
    
    """

    def __init__(self):
        """
        Class Constructor. Starts the action server node
        """
        super().__init__('hydrophone_processor_aserver')
        self.action_server = ActionServer(
            self,
            Hydrophoneraw,
            'hydrophoneprocessor',
            self.execute_callback
        )
        self.c_one_publisher = self.create_publisher(Float32MultiArray, 'hydrophonepeakcone', 10)
        self.c_two_publisher = self.create_publisher(Float32MultiArray, 'hydrophonepeakctwo', 10)
        self.c_three_publisher = self.create_publisher(Float32MultiArray, 'hydrophonepeakcthree', 10)
        self.raw_data = ''
        self.header_size = 17
        self.converted_data = ''
        self.data_range = 0
        self.check_signum

    
        
        
        
        

    def execute_callback(self, goal_handle):
        """
        ROS Callback function for processing accepted goals. This function carries out server functionality when connection to client is made.
        In this case, TODO

        Args:
            goal_handle ([ROS Goal]): [Allows for the functionality of goals, such as the ability to cancel them]
        """
        self.get_logger().info('Client request recieved...')
        self.subscription = self.create_subscription(
            String,
            'hydrophonerawdata',
            self.listener_callback,
            10
        )
        self.get_logger().info('Subscription created...')
        if not self.raw_data:
            self.get_logger().info('No data received, run hydrophone streamer action server!')
        else:
            self.convert_hydro_data()
            self.get_logger().info('Data converted')
            channel_tuple = self.isolate_sample()
            self.get_logger().info('Samples Isolated.')
            peaks = self.peak_detect(channel_tuple)
            self.get_logger().info('Peaks detected. Publishing...')
            
            msg_one = Float32MultiArray()
            msg_two = Float32MultiArray()
            msg_three = Float32MultiArray()
            msg_one.data = peaks[0]
            msg_two.data = peaks[1]
            msg_three.data = peaks[2]
            self.c_one_publisher.publish(msg_one)
            self.c_two_publisher.publish(msg_two)
            self.c_three_publisher.publish(msg_three)
            self.get_logger().info('Channels published.')
            


        result = Hydrophoneraw.Result()
        return result





    def listener_callback(self, msg):
        """ROS Callback function for subscriptions. This is used to assign message data locally.

        Args:
            msg ([String]): [Hydrophonedataraw published from hydrophone_streamer_aserver.py is subscribed to here.]

        """
        self.raw_data = msg.data
    
        
    def convert_hydro_data(self):

        """Converts the HYdrophone data into dataframe using pandas. Removes unuseful data
        """
        self.get_logger().info('Attempting to clean raw hydrophone data')
        data = io.StringIO(self.raw_data)
        dataframe = pd.read_csv(data, delimiter="\\", header=None)
        dataframe = dataframe.transpose() #swaps rows/columns
        dataframe = dataframe.dropna() #removes NaN data
        new_dataframe = dataframe.iloc[2:,:] #TODO Testing, removes all None data
        self.new_dataframe = new_dataframe.iloc[self.header_size:,:] #TODO Testing, removes matrix of header data
        self.df_range = self.new_dataframe.shape[0]
        self.get_logger().info('Hydrophone data cleaned.')
        self.get_logger().info('Data range = ' + str(self.df_range))
           
    def isolate_sample(self):
        """Isolates samples within the dataframe and returns them, possibly iteratively, or saved in a global array

        """
        self.get_logger().info('Isolating samples...')
        
        samp_flag = True
        flag = False
        new_packet = False
        samp_no = 1
        channel_one_arr = []
        channel_two_arr = []
        channel_three_arr = []
        sample_header_size = 20
        sampconst = ['\'b\'', '\"b\"', '\'b"', 'b\'\'']
        

        for i in range(0,self.data_range): #if this doesnt work try 614000 for testing
            sample = self.new_dataframe.iloc[i,0]

            if (new_packet == True):
                self.get_logger().info("New packet at ", i)
                for x in range(sample_header_size):
                    if("xa6" in sample):
                        break #xa6 will always be at the end of the header for 3 channels, break once xfa is found
                    self.new_dataframe = self.new_dataframe.drop(self.new_dataframe[i], 0)
                self.new_dataframe = self.new_dataframe.drop(self.new_dataframe.index[i],0) #check this, removes last header byte
                new_packet = False
                if ((sample == '10') or ('n' in sample)): #fixes error with recognising \n left in samples
                    self.new_dataframe = self.new_dataframe.drop(self.new_dataframe.index[i],0)
                samp_no = 1
            
            for x in sampconst: #allows one character through, but only if theres half a sample through already
                if x in sample:
                    sample = sample.strip(x)
                    new_packet = True
            
            if (((len(sample) == 3) and ('x' in sample)) or ((len(sample) == 1) and (flag == True))):
                if(flag == False):
                    if(('ff' not in sample) and ('00' not in sample)):
                        self.new_dataframe = self.new_dataframe.drop(self.new_dataframe.index[i])
                    
                    sample_value = int("0"+sample,0)*256
                    flag = True
                else:
                    if(len(sample) == 3):
                        sample_value = sample_value + int("0"+sample,0)
                        sample_value = self.check_signum(sample_value,16) #fix positive or negative in hex
                        flag = False
                        sample_no += 1
                        samp_flag = False
                    elif (len(sample) == 1): #dom note: realsied all escape sequences had to come after three character, so added this part
                        if('x' in sample):
                            sample_value = sample_value % 1000 #Dom note: get it to a reasonable number, this will be an error value, but not all will be perfect
                        else:
                            sample = fr'"\{sample}"'
                            sample = ast.literal_eval(sample) #ord() doesnt work with two characters, so use literal_eval instead
                            sample = ord(sample)
                            sample_value = sample_value + sample
                            sample_value = self.check_signum(sample_value,16)
                            flag = False
                            samp_no += 1
                            samp_flag = False
            
            elif(len(sample) == 4) and ('x' in sample):
                s_obj = slice(3) #for when the bytes are two hex and one ascii
                s_obj_two = slice(3,4) #example x00F, it splits this into x00 and F
                sample_value = int("0"+sample[s_obj],0)*256 #the F will then be ord() to a value
                sample_value = sample_value + ord(sample[s_obj_two])
                sample_value = self.check_signum(sample_value,16)
                samp_no += 1
                samp_flag = False
            else:
                continue

            if (samp_no % 3 == 0 and samp_flag == False): #the header number is odd to ensure the right bytes
                channel_one_arr.append(sample_value)
                samp_flag = True
            elif (samp_no % 3 == 1 and samp_flag == False):
                channel_two_arr.append(sample_value)
                samp_flag = True
            elif (samp_no % 3 == 2 and samp_flag == False):
                channel_three_arr.append(sample_value)
                samp_flag = True
                #i+=1
        self.get_logger().info('Samples parsed...')
        return channel_one_arr,channel_two_arr,channel_three_arr
                             
    def check_signum(self,val,bits):
        
        if(val & (1 << (bits - 1))) != 0: #if sign bit is set, e.g 8bit: 1250255
            val = val - (1 << bits) #compute negative value
        
        return val #return positive value as is

    def peak_detect(self, channels):
        """uses peak detect to detect peaks above at set delta, this may require configuration based on testing. THis gives the start of the tag in each channel

        Args:
            channels (tuple): tuple of the three channels gained from isolating the sample

        Returns:
            tuple: three peak detections into a tuple
        """
        peak_detect_one = peakdetect.peakdetect(channels[0],x_axis=None,delta=40000)
        peak_detect_two = peakdetect.peakdetect(channels[1],x_axis=None,delta=40000)
        peak_detect_three = peakdetect.peakdetect(channels[2],x_axis=None,delta=40000)

        return peak_detect_one, peak_detect_two, peak_detect_three



        

def main(args=None):
    rclpy.init(args=args)
    hydrophone_processor_aserver = HydrophoneProcessorAServer()
    rclpy.spin(hydrophone_processor_aserver)



if __name__ == '__main__':
    main()
