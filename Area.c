#include<stdio.h>

int SquareArea(int iValue)
{
	int iOutput = 0;
	iOutput = iValue*iValue;

	return iOutput;
}



int main()
{
	int iSide = 5;
	int iArea = 0;

	iArea = SquareArea(iSide);

	printf("Are of Square : %d\n",iArea);

	return 0;
}