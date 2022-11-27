#include<stdio.h>

int Addition(int iVal1 , int iVal2)
{
	int iOut = 0;
	iOut = iVal1 + iVal2;
	return iOut;
}


int main()
{
	int iNo1 = 10;              
	int *Ptr1 = &iNo1;       // Ptr1 is pointer which holds address of iNo1

	int iNo2 = 20;
	int *Ptr2 = &iNo2;       // Ptr2 is pointer which holds address of iNo2

	int Add = 0;

	int (*FPtr)(int , int);      // Function Pointer
	FPtr = Addition;             // Function Pointer which holds address of Addition Function

	Add = FPtr(*Ptr1, *Ptr2);    

	printf("\n Addition is : %d",Add);

	return 0;
}