/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int pipefds[2]; //[0] for read, [1] for write
    pipe(pipefds);
    
    char buf[4096];
    for (int i = 0; i < sizeof(buf); ++i)
    {
        buf[i] = 0x7f;
    }
    
    ssize_t ret = -1;
    
    int loop = 100;
    if (argc > 1)
    {
        loop = atoi(argv[1]);
    }
    
    for (int i = 0; i < loop; ++i)
    {
        printf("loop: %d\n", i);
        ret = write(pipefds[1], buf, sizeof(buf));
        if (ret < 0)
        {
            perror(NULL);
        }
        else
        {
            printf("%d\n", ret);
        }
    } // 当i=16的时候会阻塞，可知管道大小为64k
    
    close(pipefds[0]);
    close(pipefds[1]);
    
    return 0;
}*/

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int _pipe[2];
    if(pipe(_pipe) == -1)
    {
        perror("pipe");
        return 1;
    }
    int ret;
    int count = 0;
    int flag = fcntl(_pipe[1],F_GETFL);
    fcntl(_pipe[1],F_SETFL,flag|O_NONBLOCK);
    while(1)
    {
        ret = write(_pipe[1],"b",1);
        if(ret == -1)
        {
            printf("error %s\n",strerror(errno));
            break;
        }
        count++;
    }
    printf("count = %d\n",count);

}