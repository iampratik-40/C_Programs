#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[50];

    printf("Enter the File that you want to delete : \n");
    scanf("%s",FileName);

    remove(FileName);

    return 0;
}