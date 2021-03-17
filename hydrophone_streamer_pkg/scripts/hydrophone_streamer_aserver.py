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
"""A ROS Python Action Server for streaming raw data from acoustic hydrophones"""

import socket
import hydrophone_config
import rclpy
import pandas as pd
from io import StringIO
from rclpy.action import ActionServer
from rclpy.node import Node
from hydrophone_streamer_pkg.action import Hydrophoneraw
from std_msgs.msg import String

class HydrophoneStreamerAServer(Node):
    """
    Hydrophone Streamer Action Server Class
    Calls functionality of the action server. Imports hydrophone connection configuration and opens up a temporary connection.
    Data from connection is stored and published to node network.
    
    """

    def __init__(self):
        """
        Class Constructor. Starts the action server node
        """
        super().__init__('hydrophone_streamer_aserver')
        self.action_server = ActionServer(
            self,
            Hydrophoneraw,
            'hydrophoneraw',
            self.execute_callback
        )
        self.publisher = self.create_publisher(String, 'hydrophonerawdata', 10)
        self.are_hydrophones_in = False
        
        
        

    def execute_callback(self, goal_handle):
        """
        ROS Callback function for processing accepted goals. This function carries out server functionality when connection to client is made.
        In this case, a temporary connection to hydrophones are made and data is stored

        Args:
            goal_handle ([ROS Goal]): [Allows for the functionality of goals, such as the ability to cancel them]
        """
        self.get_logger().info('Client request recieved...')
        self.get_logger().info('Attempting Hydrophone connection...')
        datastr = self.open_hydro_connection()
        self.get_logger().info('Sample collected. Publishing...')
        self.get_logger().info(datastr)
        msg = String()
        msg.data = datastr
        self.publisher.publish(msg)


        result = Hydrophoneraw.Result()
        return result
        
    def open_hydro_connection(self):
        """
        Opens up connection to the ORCA Board
        """
        self.get_logger().info('Establishing connection...')
        hydroconfig = hydrophone_config.HydrophoneConfig()
        self._socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self._socket.bind((hydroconfig._host,hydroconfig._port))
        self.get_logger().info('Hydrophone Connection created')
        datastr = StringIO('')
    
        for i in range(0, hydroconfig._datarange):
            if self.are_hydrophones_in == True:
                data, addr = self._socket.recvfrom(1024)
                datastr.write(str(data)) #TODO CHECK THIS self._socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
                #TODO add logging
                i+=1
            else:
                
                 df = pd.read_csv('~/hal/HAL/HAL/src/hydrophone_streamer_pkg/scripts/raw.txt')
                 df.to_csv(datastr)
        self._socket.close()
        str_datastr = datastr.getvalue()
        return str_datastr




        


def main(args=None):
    rclpy.init(args=args)
    hydrophone_streamer_aserver = HydrophoneStreamerAServer()
    rclpy.spin(hydrophone_streamer_aserver)



if __name__ == '__main__':
    main()
