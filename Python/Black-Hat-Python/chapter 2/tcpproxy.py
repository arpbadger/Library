#!/usr/bin/python 

import sys      # system controls
import socket   
import threading  # execute concurrently 

def server_loop(local_host,local_port, remote_host,remote_port,receive_first):
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    try:   # means, do this , but if it fails we'll execute something else
        server.bind((local_host, local_port))
    except:
        # the %s %d is just like c programming 
        print("{!!} Failed to listen on %s:%d" %(local_host,local_port))
        print("{!!} Checking for other listening sockets or correct permsissions")
        sys.exit(0)