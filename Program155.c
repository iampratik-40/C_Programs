#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter Charctor : \n");
    scanf("%c",&ch);

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("%c is Small CaseL etter\n",ch);
    }
    else
    {
        printf("%c is not Small Case Letter\n",ch);
    }

    return 0;
}