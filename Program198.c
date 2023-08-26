
#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1 , char *str2)
{
    for( ; ((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2)) ; str1++ , str2++);  //; is imp
    
    return ((*str1 == '\0') && (*str2 == '\0'));
    
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter First String : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter Second String : \n");
    scanf(" %[^'\n]s",Brr);

    bRet = strcmpX(Arr , Brr);

    if(bRet == true)
    {
        printf("Both Strings are Identical\n");
    }
    else
    {
        printf("Both Strings are Different\n");
    }

    return 0;
}

// If the length of first string is 'N' and length of second string is 'M' then the tim ecompliexity o given application is 'X' where X is position o firdt mismached charactor of both the strings. +9