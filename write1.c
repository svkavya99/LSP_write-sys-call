#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
int fd,ret,k;
char buff[50];
fd=open("start",O_WRONLY|O_CREAT);
if(fd == -1)
{
printf("OPEN FAILS\n");
perror("ERROR");
}
else
{
printf("OPEN SUCESS\n");
printf("fd=%d\n",fd);
}
ret=read(0,&buff,10);
if(ret<0)
{
printf("READ FAILS\n");	
}
else
{
printf("READ SUCESS\n");	
}
k=write(1,buff,10);

if(k<0)
{
	printf("WRITE FAILS\n");
}
else
{
	printf("WRITE SUCESS,%d\n",k);
}
return 0;
}
