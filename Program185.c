#include<stdio.h>

void strcpyCapX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    strcpyCapX(Arr,Brr);

    printf("String after Copy : %s\n",Brr);

    return 0;
}
