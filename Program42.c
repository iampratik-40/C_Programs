#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iResult = 1;

    if(iNo < 0)  // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iResult = iResult * iCnt;
    }
    return iResult;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}