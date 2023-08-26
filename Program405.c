#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[10];
    int iRet = 0;

    printf("Enter the File that you want to Open : \n");
    scanf("%s",FileName);

    fd = open(FileName , O_RDONLY);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);     //5
    write(1,Arr,iRet);

    close(fd);

    return 0;
}