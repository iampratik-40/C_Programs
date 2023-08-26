// Write a program which checks weather number Even or Odd.

#include<stdio.h>       // For printf and scanf
#include<stdbool.h>     // For bool data type

////////////////////////////////////////////////////////////////
//
// Funcion Name  : CheckEvenOdd
// Input         : Integer
// Output        : Boolean
// Description   : Checks wheater input is even or odd.
// Author        : Pratik Dinkar Jawanjal
// Date          : 25/04/2023
//
////////////////////////////////////////////////////////////////

bool CheckEvenOdd( int iNo)
{
    if((iNo % 2) == 0 )
    {
        return true;
    }

    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////
//Entry Point function
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;   // Default value of bool is false(0)

    printf("\n Please Enter Number to check wheater it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);  // Function call.

    if(bRet == true)
    {
        printf("\n %d is Even NUmber.",iValue);
    }
    else
    {
        printf("\n %d is Odd Number.",iValue);
    }
    
    return 0;
}