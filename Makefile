# Makefile for the socket programming example
#

simple_server_objects = Socket.o ServerSocket.o simple_server_main.o
simple_client_objects = Socket.o ClientSocket.o simple_client_main.o
simple_client1_objects = Socket.o ClientSocket.o simple_client1_main.o


all : simple_server simple_client

simple_server: $(simple_server_objects)
	       g++ -o simple_server $(simple_server_objects)


simple_client: $(simple_client_objects)
	       g++ -o simple_client $(simple_client_objects)
simple_client1: $(simple_client1_objects)
	       g++ -o simple_client1 $(simple_client1_objects)


Socket: Socket.cpp
ServerSocket: ServerSocket.cpp
ClientSocket: ClientSocket.cpp
simple_server_main: simple_server_main.cpp
simple_client_main: simple_client_main.cpp


clean:
	rm -f *.o simple_server simple_client
