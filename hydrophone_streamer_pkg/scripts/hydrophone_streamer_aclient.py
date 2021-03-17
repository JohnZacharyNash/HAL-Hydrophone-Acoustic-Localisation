#! /usr/bin/python3
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
"""A ROS Python Action client for streaming raw data from acoustic hydrophones"""


import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from hydrophone_streamer_pkg.action import Hydrophoneraw

class HydrophoneStreamerAClient(Node):

    def __init__(self):
        super().__init__('Hydrophone_streamer_aclient')
        self._action_client = ActionClient(self,Hydrophoneraw,'hydrophoneraw')

    def send_goal(self, streamseconds):
        goal_msg = Hydrophoneraw.Goal()
        goal_msg.streamseconds = streamseconds

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self,future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Client goal has been rejected.')
            return
        
        self.get_logger().info('Client goal has been accepted.')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.rawdata))
        rclpy.shutdown()
        
    
    def feedback_callback(self,feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Recieved feedback: {0}'.format(feedback.rawsnapshot))




def main(args=None):
    rclpy.init(args=args)
    action_client = HydrophoneStreamerAClient()
    action_client.send_goal(10)
    rclpy.spin(action_client)
    action_client



if __name__ == '__main__':
    main()
