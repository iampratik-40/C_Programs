#include<stdio.h>
#include<stdlib.h>

void Fun(int Arr[] , int iLength)
{
    // Logic
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    printf("Enter Elemets of Array : \n");

    ptr = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of Array are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Fun(ptr, iSize);

    free(ptr);

    return 0;
}