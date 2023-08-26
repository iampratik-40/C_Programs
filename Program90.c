// Linear Search

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

int SearchFirstOccurance(int Arr[] , int iLength  , int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
    
}

int main()
{
    int iSize = 0 , iValue = 0 , iRet = 0;
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

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

/*  
    printf("Elements of Array are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

*/
  
    iRet = SearchFirstOccurance(ptr , iSize , iValue);
    
    printf("%d is at %d Index in Array".iValue.iRet);
    free(ptr);

    return 0;
}