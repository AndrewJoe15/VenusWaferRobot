/*For more information see notes.txt in the Documentation folder */
/*For more information see notes.txt in the Documentation folder */
#include <gplib.h>   

#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_
#include "../../Include/pp_proj.h"

#include <gplib.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <stdlib.h> 
#include <string.h> 
#include <unistd.h> 
#include <netinet/in.h>

#define MAXPENDING 5 // 最大链接数 
#define BUFFSIZE 24 
#define TIMEOUT 86400 //超时时间 24小时
#define PORT_NUM 1024 //端口号

void Die(char *mess) 
{ 
	perror(mess); 
	exit(1); 
}

void ReceiveDataPacket(int sock,int *state) //function to retrieve data 
{ 
  char *Cdata = (char*)pushm; //pushes to sys.cdata[0] up to BUFFSIZE 
  int received = 0;
  if ((received = recv(sock, Cdata, BUFFSIZE, 0)) < 0) 
  { 
  	close(sock); 
	*state=2;
  } 
}

void SendDataPacket(int sock,int *state) //function to send data 
{ 
	char *Cdata100 = (char*)pushm+100; //sends bytes from sys.cdata[100] up to BUFFSIZE 
	if (send(sock, Cdata100, BUFFSIZE, 0) <0) 
	{ 
		close(sock); 
		*state=2;
	} 
}

void SendDataStr(int sock, char *str, int *state)
{
	if (send(sock, str, strlen(str), 0) <0) 
	{ 
		close(sock); 
		*state=2;
	} 
}



int main(void)
{
	int serversock, clientsock; 
	int state = 0; 
	struct timeval timeout = {TIMEOUT,0};
	struct sockaddr_in server, client; 
	unsigned int clientlen;
	InitLibrary();  // Required for accessing Power PMAC library
	while(1<2) //enter loop of creating server 
	{
		switch (state) 
		{
			case 0:
				if ((serversock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0) 
				{ 
					Die("Failed to create socket"); 
					state = -1; 
				} 
				else 
				{ 
					state = 1; 
				} 
				pshm->P[1]=state;
			break;
			case 1:
				memset(&server, 0, sizeof(server)); // Clear struct 
				server.sin_family = AF_INET; // Internet/IP 
				server.sin_addr.s_addr = htonl(INADDR_ANY); // Incoming address 
				server.sin_port = htons(PORT_NUM); // Server port
				if (bind(serversock, (struct sockaddr *) &server, sizeof(server)) < 0) 
				{ 
					Die("Failed to bind the server socket"); 
					state = -2; 
				} 
				else 
				{ 
					state = 2; 
				}
			break;
			case 2:
				if (listen(serversock, MAXPENDING) < 0)
				{
					Die("Failed to listen on server socket");
					state = -3;
				}
				else
				{
					printf("Listening");
					state = 3;
				}
			break;
			case 3:
				clientlen = sizeof(client);
				if ((clientsock = accept(serversock, (struct sockaddr *) &client, &clientlen)) < 0)
				{
					Die("Failed to accept client connection"); 
					state = -4;
				}
				else 
				{ 
					setsockopt(clientsock,SOL_SOCKET,SO_SNDTIMEO,(char *)&timeout,sizeof(struct timeval));
					setsockopt(clientsock,SOL_SOCKET,SO_RCVTIMEO,(char *)&timeout,sizeof(struct timeval));
					state = 4; 

				}
				fprintf(stdout, "Client connected: %s\n",inet_ntoa(client.sin_addr));
				usleep(50);
			break;
			case 4:
				ReceiveDataPacket(clientsock,&state); 
				if(state==2)
				{
					break;
				}
				// 回传确认收到
				SendDataPacket(clientsock, '<',      &state);
				// 处理请求
				SendDataPacket(clientsock,&state);
				if(state==2)
				{
					break;
				}
				else
				{
					state = 4;
				}
			break;
			default:
			break;
		}
	}
	CloseLibrary();
	return 0;
}

