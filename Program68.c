#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCout = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCout++;
        iNo = iNo / 10;    
    }
    return ((float)iSum / (float)iCout);

}

int main()
{
    int iValue = 0;
    float fRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    fRet = DigitsAverage(iValue);

    printf("Average of Digits is : %f\n",fRet);

    return 0;
}