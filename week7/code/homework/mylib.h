#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


//read
int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
//write
ssize_t write(int fd, const void *buf, size_t count);



