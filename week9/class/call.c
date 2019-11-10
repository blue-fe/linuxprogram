#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	printf("call:PID = %d,PPID = %d",getpid(),getppid());
	system("/home/rlk/test/week9");
	printf("after calling");
}
