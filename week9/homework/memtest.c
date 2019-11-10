#include "my.h"
#include <string.h>
static void men_leak1(void)
{
	char *p=malloc(1);
}

static void mem_leak2(void)
{
	FILE *fp=fopen("test.txt","w");
}

static void men_overrun1(void)
{
	char *p=malloc(1);
	*(short *)p=2;
	free(p);
}
static void men_overrun2(void)
{
	char array[5];
	strcpy
}

