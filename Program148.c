/*

    Input : 
        Row    : 4
        Col    : 4
    
    Output : 
        
             *
          *  *
       *  *  * 
    *  *  *  *

*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0;

    for(i = iRow ; i >= 1 ; i--)
    {
        for(j = iCol ; j >= 1 ; j--)
        {
            
        }
        printf("\n");
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Coloums : \n");
    scanf("%d",&iValue2);
    
    Display(iValue1 , iValue2);

    return 0;
}


// Time Complixity : N^2