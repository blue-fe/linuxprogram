#include <stdio.h>
#include <stdlib.h>

void menu()
{
	printf("***********************************");
	printf("\t0.退出");
	printf("\t1.创建新文件");
	printf("\t2.写文件");
	printf("\t3.读文件");
	printf("\t4.修改文件权限");
	printf("\t5.查看当前文件的权限修改文件权限");
	printf("***********************************");
}

int main()
{
	int choice;
	menu();
	scanf("%d",&choice);
	switch(choice){
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}
}
