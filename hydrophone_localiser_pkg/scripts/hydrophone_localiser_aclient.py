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
"""A ROS Python Action client requesting heading or distance processing from the server"""

import sys
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import String


from hydrophone_localiser_pkg.action import Hydrophonelocalise


class HydrophoneLocaliserAClient(Node):

    def __init__(self):
        """Constructor for client node
        """
        super().__init__('Hydrophone_localiser_aclient')
        self._action_client = ActionClient(self,Hydrophonelocalise,'hydrophonelocaliser')
        self.designated_goal = String()
        self.designated_goal.data = "both"

    def send_goal(self, request):
        
        goal_msg = Hydrophonelocalise.Goal()
        goal_msg.request = request

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self,future):
        """Checks to see whether goal has been accepted or declined

        Args:
            future ([type]): [description]
        """
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Client goal has been rejected.')
            return
        
        self.get_logger().info('Client goal has been accepted.')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        """Checks to see what the result of the functionality is

        Args:
            future (goal): Stores result of the functionality of the action server
        """
        result = future.result().result
    
        rclpy.shutdown()
        
    
    def feedback_callback(self,feedback_msg):
        """Provides incremental feedback on the progress of the goal

        Args:
            feedback_msg (goal message): the feedback variable
        """ 
        feedback = feedback_msg.feedback
        self.get_logger().info('Recieved feedback: {0}'.format(feedback.rawsnapshot))

    def set_designated_goal(self,goal):

        self.designated_goal = goal




def main(args=None):
    rclpy.init(args=args)
    action_client = HydrophoneLocaliserAClient()
    action_client.send_goal(action_client.designated_goal)
    rclpy.spin(action_client)
    



if __name__ == '__main__':
    main()
