#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0 , iSize = 0;

    char Arr[50] = {'\0'};

    printf("Enter File Name that You want to Open : \n");
    scanf("%s",Fname);

    printf("Enter the Number of bytes that you want ot read : \n");
    scanf("%d",&iSize);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        return -1;
    }
    
    iRet = read(fd,Arr,iSize);

    printf("%d bytes gets successfully fetched from the file \n",iRet);
    
    printf("Data from File is : %s\n",Arr);
    write(1,Arr,iRet);

    close(fd);

    return 0;
}