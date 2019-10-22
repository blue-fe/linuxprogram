#include "mylib.h"
int main()
{
	int a[UNUMBER];
	init(a,UNUMBER);
	show(a,UNUMBER);
	
	printf("sum=%d,max=%d\n",sum(a,UNUMBER),max(a,UNUMBER));
	return 0;
}
