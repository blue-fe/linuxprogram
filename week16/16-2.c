#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#define SERVPORT 3333
#define BACKLOG 10

int main()
{
	int sockfd,client_fd;
	struct sockaddr_in my_addr;
	struct sockaddr_in remote_addr;
	int sin_size;

	if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
	{
		perror("socket create fail!");
		exit(1);
	}
	my_addr.sin_family=AF_INET;
	my_addr.sin_port=htons(SERVPORT);
	my_addr.sin_addr.s_addr=INADDR_ANY;
	bzero(&(my_addr.sin_zero),8);
	if(connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(struct sockaddr))==-1)
	{
		perror("connect error!");
		exit(1);
	}
	if((recvbytes=recv(sockfd,buf,MAXDATASIZE,0))==-1)
	{
		perror("cannect error2!");
		exit(1);
	}
	buf[recvbytes]='\0';
	printf("receive:%s",buf);
	close(sockfd);
}




