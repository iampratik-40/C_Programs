#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.09;
	double d = 88.989;

	// Pointers
	
	char *cp = &ch;
	int *ip = &i;
	float *fp = &f;
	double *dp = &d;

	printf("\n Value of Char Pointer : %p",cp);
	printf("\n Address of Char : %p",&ch);
	printf("\n Value Referd by Char Pointer : %c",*cp);

	// Void Pointer

	void  *vp = &i;
	
	printf("\n Value in Void Pointer : %p",vp);
	printf("\n Address of int : %p",&i);
	printf("\n Value Rfered by void pointer : %d",*(int *)vp);

	vp = &f;

	printf("\n Value of float : %f",f);
	printf("\n Address of Float : %p",vp);
	printf("\n Value Rfered by Float Pointer : %f",*(float *)vp);

	return 0;
}