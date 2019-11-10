#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc,char *argv[],int i)
{
	printf("PID is: %d\n",getpid());
	printf("PPID is: %d\n",getppid());
	for(i = 0;i < argc;i++)
		printf("%s\n",argv[i]);
}


