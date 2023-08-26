#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter File Name that You want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        return -1;
    }
    else
    {
        printf("File is Successfully Opened with FD %d\n",fd);
    }

    close(fd);

    return 0;
}