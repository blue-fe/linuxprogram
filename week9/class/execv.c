#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *argv[];
argv[0] = "/home/rlk/test/week9";
argv[1] = "hello";
argv[2] = "world";
argv[3] = "null";
	printf("PID is: %d\n",getpid());
	evecve("/home/rlk/test/week9",argv);
	printf("after");
}
