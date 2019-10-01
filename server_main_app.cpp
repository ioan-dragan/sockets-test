#include "ServerSocket.h"
#include "SocketException.h"
#include <string>

int main(int argc, int argv[]){
  try{
    //create a socket
    ServerSocket server(30001);

    //run the server
    while(1){
      ServerSocket new_socket;
      server.accept(new_socket);
      server.getClientName(new_socket);
      try{
	while(true){
	  std::string data;
	  new_socket >> data;
	}
      }
      
    }
  }
  catch(SocketException &e ){
    std::cout<<"Exception caught:"<< e.description()<<"\nAbborting mission\n";
  }
  return 0;
}
