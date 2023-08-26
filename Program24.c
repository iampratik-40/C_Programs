#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)     // O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        } 
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

// Time Complexity : O(N)
// Where N is natural number.