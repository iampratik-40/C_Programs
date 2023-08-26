#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int Arr[] , int iLength)
{
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("Maximum Number in Array is : %d\n",iMax);
    printf("Minimum Number in Array is : %d\n",iMin);
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

    /*
    printf("Elements of Array are : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
   */

    MaximumMinimum(ptr , iSize);

    free(ptr);

    return 0;
}

// Time Complixity : N