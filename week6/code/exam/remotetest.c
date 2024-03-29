#include "dylib.h"
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
int main()
{
	int a[UNUMBER];
	
	void *hd;
	char *error;
	void(*f1)();
	int(*f2)(),(*f3)();
	hd = dlopen("../dynamiclib/libdylib.so",RTLD_LAZY);
	if(!hd){
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	
	f1 = dlsym(hd,"show");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f2 = dlsym(hd,"max");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f3 = dlsym(hd,"sum");
	if((error = dlerror())!=NULL){
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f1(a,UNUMBER);
	printf("max = %d\n",f2(a,UNUMBER));
	printf("sum = %d\n",f3(a,UNUMBER));
	return 0;
}
