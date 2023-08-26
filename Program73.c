#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];  // Static Memory
    int iCnt = 0;

    printf("Enter the Elements : \n");
    
    for(iCnt = 0 ; iCnt < 5 ; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }

    printf("Elements of Array are : \n");

    for(iCnt = 0 ; iCnt < 5 ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}