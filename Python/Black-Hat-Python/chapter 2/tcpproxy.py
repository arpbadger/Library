#!/usr/bin/python 

import sys
import socket
import threading 

def server_loop(local_host,local_port,remote_host,remote_port, receive_first):
   
    server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    
    try:
        server.bind((local_host,local_port))
    except:
        print("{!!} Error: Failed to listen on %s:%d" %(local_host,local_port))
        print("{!!} Checking to see if other listening sockets or correct persmissions")
        sys.exit(0)

    print("[*] Listening on %s:%d" % (local_host,local_port))
    
    server.listen(5)

    while True: 
        client_socket, addr = server.accept()

        # print out the local connection information 
        print("[==>] Received incoming connection from %s:%d" % (addr[0], addr[1])


    return 

def main():

    # no fancy command line parsing here 
    if len(sys.argv[1:]) != 5:

        print("Usage: ./proxy.py [localhost] [localport] [remotehost] [remoteport] [receivefirst]\n")
        print("Example: ./proxy.py 127.0.0.1 9000 10.0.0.1 80 True")

        sys.exit(0)
    
    # setup local listening parameters
    local_host = sys.argv[1]
    local_port = sys.argv[2]
    # setup remote target 
    remote_host = sys.argv[3]
    remote_port = sys.argv[4]

    # this tells our proxy to connect and receive data 
    # before sending to the remote host 
    receive_first = sys.argv[5]
