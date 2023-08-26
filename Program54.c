#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == 8)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckDigits(iValue);

    if(bRet == true)
    {
        printf("Digits 8 is present in Number \n");
    }
    else
    {
        printf("Digits 8 is Not present in Number \n");
    }
    return 0;
}