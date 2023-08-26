#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter File Name that You want to Create : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to Create File \n");
        return -1;
    }
    else
    {
        printf("File is Successfully Created\n");
    }

    return 0;
}