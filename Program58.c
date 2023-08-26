#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(int iNo , int iSearch)
{
    int iDigit = 0;

    if((iSearch < 0) || (iSearch > 9))  // Filter
    {
        printf("Error : Invalid Input \n");
        printf("Enter Digit in range of 0-9 \n");
        return false;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == iSearch)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Digit from 0-9 : \n");
    scanf("%d",&iValue2);

    bRet = CheckDigits(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d \n",iValue2,iValue1);
    }
    else
    {
        printf("%d is Not present in %d \n",iValue2,iValue1);
    }
    return 0;
}