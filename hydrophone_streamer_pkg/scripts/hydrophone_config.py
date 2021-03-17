#! /usr/bin/python3
'''
Author: John Zachary Nash
Copyright:
TODO
'''

import socket

class HydrophoneConfig():
    """
    Hydrophone Configuration Class
    Holds connection details for hydrophones allowing for easy modification
    """
    def __init__(self):
        self._host = "0.0.0.0"
        self._port = 5453
        self._datarange = 780 #Limit how many packets of the data you wish to recieve. Default = 780. 780 roughly equates to just over a second of data.   