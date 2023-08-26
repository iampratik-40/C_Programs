#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;

    char Arr[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Enter File Name that You want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        return -1;
    }
    
    iRet = write(fd,Arr,10);

    printf("%d bytes gets successfully written in the file \n",iRet);
    close(fd);

    return 0;
}