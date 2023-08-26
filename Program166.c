#include<Stdio.h>

int StrlenSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
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

    iRet = StrlenSpace(Arr);

    printf("Number of White Space in string is : %d\n",iRet);

    return 0;
}