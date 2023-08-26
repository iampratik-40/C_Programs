#include<stdio.h>
#include<stdbool.h>

bool ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;
    }
    
    
}

int main()
{
    int iValue = 0;
    bool iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    if(bRet == true)
    {
        printf("%d is Palindrome Number\n",iValue);
    }
    else
    {
        printf("%d is not Plaindrome Numeber\n",iValue);
    }
    

    return 0;
}