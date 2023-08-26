#include<stdio.h>

void strCatX(char *src , char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = ' ';
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    strCatX(Arr,Brr);

    printf("String after Copy : %s\n",Brr);

    return 0;
}
