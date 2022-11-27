#include<stdio.h>

int main()
{

	int Arr[5] = {10,20,30,40,50};

	printf("\n Base address of Array : %p",Arr);
	printf("\n Base address of Array : %p",&Arr);

	printf("\n Size of Array : %d",sizeof(Arr));

	return 0;
}