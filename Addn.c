//Accept N Numers from user and perform addition

// Input
// Value of N = 5
// Values :  10 20 30 40 50

// Output 
// Addition : 150

// Algoritm
/* 
    Start
        Accept the nuber of element from user
        Allocate the memory to store that numbers
        Accept the number from user
        Perform addition of all Numbers
        Display the addition
    End
*/

#include<stdio.h>    // For printf and scanf
#include<stdlib.h>   // For malloc and free

////////////////////////////////////////////////
//
// Application Name : Application of N Numbers
// Input   :  N Numbers
// Output  :  Addition
// Author  :  Pratik
// Date    :  18 Sept 2022
//
////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;      // Pointer to strore address of Array
    int iSize = 0;        // Variable to hold size of array
    int i = 0;            // Loop Counter
    int iSum = 0;
    
    printf("\n Enter How Many Elements you want ? : ");
    scanf("%d",&iSize);

    // Allocate the memory 
    Arr = (int *)malloc(iSize * sizeof(int));

    printf("\n Enter The Elements : ");
    
    for(i = 0 ; i < iSize ; i++)
    {
        scanf("%d",&Arr[i]);
    } 

    // Perform Addition
    for( i = 0 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("\n Addition is : %d",iSum);

    free(Arr);
    return 0;
}