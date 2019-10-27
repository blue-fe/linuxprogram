#include "mylib.h"

// 创建一个新的文件

fd_write = open("stdio1.h",O_RDWR|O_CREAT|O_TRUNC,0777);
if( fd_write == -1 )
{
	perror("open file:");
	exit(1);
}


// 读文件
size = read(fd,buf,sizeof(buf));

// 写文件
write(fd_write,buf,strlen(buf));
// 清空缓冲区
memset(buf,0,sizeof(buf));







close(fd);
close(fd_write);
return 0;


 
