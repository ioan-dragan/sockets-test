#include "ServerSocket.h"
#include "SocketException.h"
#include <string>
#include <iostream>

int main ( int argc, char* argv[] )
{
  std::cout << "running....\n";

    try
      {
	// Create the socket
	ServerSocket server(30001);

	while ( true )
	  {
	    ServerSocket serv_soc;
	    server.accept ( serv_soc );
	    try{
	      while(true){
		std::string data;
		serv_soc >> data;
		serv_soc << data; 
	      }
	      
	    }
	    catch(SocketException& ){}
	  }
      }
    catch ( SocketException& e )
      {
	std::cout << "Exception was caught:" << e.description() << "\nExiting.\n";
      }

    return 0;
}
