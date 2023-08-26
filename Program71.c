#include<stdio.h>
#include<stdlib.h>  // For Dynamic Memory(Malloc)

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Memroy Alloacted succesfully");
    
    return 0;
}