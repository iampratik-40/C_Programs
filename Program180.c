#include<stdio.h>

void strUprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strUprX(Arr);

    printf("String After Editing : %s\n",Arr);
    
    return 0;
}
