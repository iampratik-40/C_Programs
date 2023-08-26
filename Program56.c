#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;
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