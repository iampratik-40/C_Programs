//Input : 5
//Output : -5 -4 -3 -2 -1

//Input : 3
//Output : -3 -2 -1 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ; iCnt < 1 ; iCnt++)  // Backward Displacement
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter The Frequency of Symbol : \n");
    scanf("%d",&iFrequency);
    
    Display(iFrequency);

    return 0;
}