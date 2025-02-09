#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

int main(){
	// setting up the socket
	int network_socket = 0 ; 
	network_socket = socket(AF_INET, SOCK_STREAM, 0);
	printf("Hello\n");
}
