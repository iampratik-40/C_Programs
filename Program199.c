#include<stdio.h>
#include<stdbool.h>

bool stricmpX(char *str1 , char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
            if((*str1 >= 'a') && (!str1 <= 'z'))
            {
                if(*str1 != (*str2 + 32));
                {
                    break;
                }
            }   
            else if((*str1 >= 'A') && (*str1 <= 'Z'))
            {
                if(*str1 != (*str2 - 32))
                {
                    break;
                }
            }
            else
            {
                break;
            } 
        }
        
        str1++;
        str2++;
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
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

    bRet = stricmpX(Arr , Brr);

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

// If the length of first string is 'N' and length of second string is 'M' then the tim ecompliexity o given application is 'X' where X is position o firdt mismached charactor of both the strings. 