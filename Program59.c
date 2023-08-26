#include<stdio.h>

int CountDigitFreqency(int iNo , int iSearch)
{
    int iDigit = 0;
    int iCnt = 0;

    if((iSearch < 0) || (iSearch > 9))  // Filter
    {
        printf("Error : Invalid Input \n");
        printf("Enter Digit in range of 0-9 \n");
        return 0;
    }

    if(iNo < 0)  // Updator
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet =0;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Digit ( 0-9 ) : \n");
    scanf("%d",&iValue2);

    iRet = CountDigitFreqency(iValue1,iValue2);
    printf("Freq of %d is : %d\n",iValue2 , iRet);

    return 0;
}