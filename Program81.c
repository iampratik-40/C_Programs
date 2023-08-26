#include<stdio.h>    // IO
#include<stdlib.h>   // Memory management

//void Demo(int *Arr,int iLength)
float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iLength);
}

int main()       // Entry Point Function
{
    int iSize = 0;    // To store size of array 
    int *ptr = NULL;  // To store address of array
    int iCnt = 0;     // Loop Counter
    float iRet = 0;

    // Step 1 : Accpet Number from User
    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    //Step 2 : Alloacte memroy dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //Step 3 : Accept the values from user
    printf("Enter the Elements : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
/*
    printf("Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[(iCnt)]);
    }
*/
   
    // Step 4 : Pass the Array to function

    iRet = Average(ptr, iSize);

    printf("Average is: %f",iRet);
    
    // Step 6 : Dealloacte the memory

    free(ptr);

    return 0;   // Return success to OS
}