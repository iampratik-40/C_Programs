// Linear Search

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] , int iLength  , int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag; 
}

int main()
{
    int iSize = 0 , iValue = 0;
    int iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    printf("Enter Elemets of Array : \n");

    ptr = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

/*  
    printf("Elements of Array are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

*/
  
    bRet = Search(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present in Array ",iValue);
    }
    else
    {
        printf("%d is Not Present in Array.",iValue);
    }

    free(ptr);

    return 0;
}