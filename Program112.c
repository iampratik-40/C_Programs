//Input : 5
//Output : -5 -4 -2 -1 0 1 2 3 4 5

//Input : 3
//Output : 1 2 3 2 1 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ; iCnt <= iNo; iCnt++)  // Forward Displacement
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