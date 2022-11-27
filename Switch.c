#include<stdio.h>

int main()
{
    int iNum = 0;

    printf("\n Enter Number : ");
    scanf("%d",&iNum);

    switch(iNum)
    {
        case 1:
            printf("\n Number 1");
            break;
        case 2:
            printf("\n Number 2");
            break;
        case 3:
            printf("\n Number 3");
            break;
        case 4:
            printf("\n Number 4");
            break;
        default:
            printf("\n Sorry");
            break;
    }
    return 0;
}