#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
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

    EditString(Arr);

    printf("String After Editing : %s\n",Arr);
    
    return 0;
}
