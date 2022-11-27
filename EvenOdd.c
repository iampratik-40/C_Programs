#include<stdio.h>

int EvenOdd(int iValue)
{
	if(iValue%2==0)
	{
		printf("\n Given Number is Even .");
	}
	else
	{
		printf("\n Given Number is Odd .");
	}
}

int main()
{
	int iNo = 0;
	printf("\n Enter a Number : ");
	scanf("%d",&iNo);

	EvenOdd(iNo);

	return 0;
}