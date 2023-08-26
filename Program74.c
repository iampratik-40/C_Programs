#include<stdio.h>    // IO
#include<stdlib.h>   // Memory management

int main()       // Entry Point Function
{
    int iSize = 0;    // To store size of array 
    int *ptr = NULL;  // To store address of array
    int iCnt = 0;     // Loop Counter

    // Step 1 : Accpet Number from User
    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    //Step 2 : Alloacte memroy dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //Step 3 : Accept the values from user
    printf("Enter the Elements : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[(iCnt)]);
    }

    printf("Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[(iCnt)]);
    }
    return 0;   // Return success to OS
}