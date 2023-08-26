#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[] , int iLength)
{
    int iSum = 0;
    int iCount = 0;

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        iSum = iSum + Arr[iCount];
    }
    return iSum;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    printf("Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[(iCnt)]);
    }

    // Step 4 : Pass the Array to function

    iRet = Addition(ptr, iSize);

    printf("Addition is : %d",iRet);

    // Step 6 : Dealloacte the memory

    free(ptr);
    return 0;
}