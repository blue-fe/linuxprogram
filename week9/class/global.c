#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main()
{
	pid_t result;
	result = fork();
	int newret;
	if(result == -1)
	{
		perror("create error");
		exit;
	}
	else if(result == 0)
	{
		printf("return is:%d\n PID is:%d\n PPID is%d\n",result,getpid(),getppid());
		newret = system("ls -l");
	}
	else
	{
		sleep(10);
		printf("return is:%d\n PID is:%d\n PPID is%d\n",result,getpid(),getppid());
		newret = system("ping www.baidu.com");
	}
}
