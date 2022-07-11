#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<malloc.h>
int main()
{
int size;
char buff[50];
strcpy(buff,"sample file");
int fd=open("out.txt",O_WRONLY|O_CREAT,0774);
if(fd<0)
{
perror("error occured");
exit(1);
}
printf("len of buf=%d\n",(int)strlen(buff));
size=write(fd,buff,strlen(buff));
printf("size=%d\n",size);
close(fd);
}
