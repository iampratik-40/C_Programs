#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
   
   //     1           2         3
   for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
    printf("\n Jay Ganesh ..");  // 4
   }
}

int main()
{
    int iValue = 0;

    printf("\n Enter the Frequency for Jay Ganesh statement : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}