#include "my.h"
int main(int argc,char *argv[])
{
	int pid1,pid2;
	FILE *fp;   
    //int fd;
    //int i=1;
    //int status;
    char *ch="0,1,2,3,4,5,6,7,8,9";
    //char *ch2="songxiaopan";
    //char *ch3="1706";
	fp=fopen("out.dat","w+");
	pid1=fork();
	pid2=fork();
	if(pid1<0||pid2<0)
	{
		perror("failes to fork!\n");
		return -1;
	}
	else if(pid1==0)
	{
		printf("%d :child1 is running now.\n",getpid());
		getchar();
		if(write(fp,ch,strlen(ch)));
        perror("child1 write");
        return 0;
		//printf("%d :child is exit now!\n",getpid());
		//exit(0);
	}
	else if(pid2==0)
	{
		printf("%d :child2 is running now.\n",getpid());
		getchar();
		if(write(fp,ch,strlen(ch)));
        perror("child2 write");
        return 0;
		//printf("%d :child is exit now!\n",getpid());
		//exit(0);
	}
	else
	{
		printf("%d:parent is waiting\n",getpid());
		wait(NULL);
		printf("%d:parent is exiting now\n",getpid());
	}
	exit(0);


    /*if((fd=open("test.txt",O_RDWR|O_CREAT,0644))==-1)
    {               
		perror("parent open");
        exit(EXIT_FAILURE);
    }
    if(write(fd,ch1,strlen(ch1))==-1)
    {
        perror("parent write");
        exit(EXIT_FAILURE);
    }
    if((pid=fork())==-1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if(pid==0)
    {
        i=2;
        printf("in child\n");
        printf("i=%d\n",i);
        if(write(fd,ch2,strlen(ch2)));
        perror("child write");
        return 0;
    }
    else
    {
        sleep(1);//等待子进程先执行
        printf("in parent\n");
        printf("i=%d\n",i);
        if(write(fd,ch3,strlen(ch3)));
        perror("parent write");
        wait(&status);//等待子进程结束
        return 0;
    }*/
}

