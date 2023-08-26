#include<Stdio.h>

int CountChar(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'z'))
        {
            iCount++;
        }
        str++;   
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountChar(Arr);

    printf("Number of z in string is : %d\n",iRet);

    return 0;
}