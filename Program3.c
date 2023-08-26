///////////////////////////////////////////////////////////////////////////////////
// Function Name : Addition
// Input         : Unsigned integer , Unsigned integer
// Output        : Unsigned integer
// Description   : Performs Addition of two number 
// Author        : Pratik Dinkar Jawanjal
// Date          : 18/04/2023
///////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which performs addition of two numbers .
//
///////////////////////////////////////////////////////////////////////////////////

/*
    Algorithm

    Start
        Accept First Number as iNo1
        Accept Second Number as iNo2
        Create one variable as Ans
        Perfrom addition of iNo1 & iNo2
        Store addition into variable Ans
        Display the value of Ans
    End

*/

#include<stdio.h>

unsigned int Addition(unsigned int iValue1 , unsigned int iValue2)
{
    unsigned int iRet = 0;
    iRet = iValue1 + iValue2;
    return iRet;
}

///////////////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0 ; int iNo2 = 0 ; int iAns =0;

    printf("\n Enter First Number : ");
    scanf("%d",&iNo1);

    printf("\n Enter Second Number : ");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1 , iNo2);

    printf("\n Addition is : %d",iAns);

    return 0;
}