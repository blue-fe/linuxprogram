#include "my.h"

int main(int argc,char *argv[])
{
	pid_t pid;   
    int fd;
    int i=1;
    int status;
    char *ch1="8002117233";
    char *ch2="songxiaopan";
    char *ch3="1706";
    if((fd=open("test.txt",O_RDWR|O_CREAT,0644))==-1)
    {               
		perror("parent open");
        exit(EXIT_FAILURE);
    }
    if(write(fd,ch1,strlen(ch1))==-1)
    {
        perror("parent write");
        exit(EXIT_FAILURE);
    }
    if((pid=vfork())==-1)
    {
        perror("vfork");
        exit(EXIT_FAILURE);
    }
    else if(pid==0)
    {
        i=2;
        printf("in child\n");
        printf("i=%d\n",i);
        if(write(fd,ch2,strlen(ch2)));
        perror("child write");
        exit(0);
    }
    else
    {
        sleep(1);//等待子进程先执行
        printf("in parent\n");
        printf("i=%d\n",i);
        if(write(fd,ch3,strlen(ch3)));
        perror("parent write");
        wait(&status);//等待子进程结束
        exit(0);
    }
}