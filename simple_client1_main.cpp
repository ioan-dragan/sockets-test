#include "ClientSocket.h"
#include "SocketException.h"
#include <iostream>
#include <string>

int main ( int argc, char* argv[] )
{
    try
      {

	ClientSocket client_socket( "localhost", 30001 );

	std::string reply;

	      try
		{
		  client_socket << "Test message. Buhuhi";
		  client_socket >> reply;
		}
	      catch ( SocketException& ) {}

	      std::cout << "We received this response from the server:\n\"" << reply << "\"\n";;

      }
    catch ( SocketException& e )
      {
	std::cout << "Exception was caught:" << e.description() << "\n";
      }

    return 0;
}
