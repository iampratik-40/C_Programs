#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0) // Filter
    {
        printf("\n Error : Invalid Input.");
        return;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("\n Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}