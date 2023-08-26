#include<stdio.h>

void strnCatX(char *src , char *dest , int iLength)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while((*src != '\0') && (iLength != 0))
    {
        *dest = *src;
        dest++;
        src++;
        iLength--;
    }
    *dest = ' ';
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter Number of Letter That you want to concate : \n");
    scanf("%d",&iNo);

    strnCatX(Arr,Brr,iNo);

    printf("String after Copy : %s\n",Brr);

    return 0;
}
