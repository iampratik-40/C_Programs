#include<stdio.h>

void strcpyCapToggleX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
            *dest = *src;   
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
            *dest = *src;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    strcpyCapToggleX(Arr,Brr);

    printf("String after Copy : %s\n",Brr);

    return 0;
}
