#include<stdio.h>

extern int iNo1;
extern int iNo2;

extern void Demo();

int main()
{
	Demo();

	printf("\n Value of Number 1 : %d",iNo1);
	printf("\n Value of Number 2 : %d",iNo2);

	return 0;
}