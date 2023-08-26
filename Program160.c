#include<Stdio.h>

int StrlenX(char str[])
{


}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);

    printf("Length of String is : %d\n",iRet);

    return 0;
}