#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 3.14;
	double d =  9.567;


	printf("\n\t Values of Variables  ");
	printf("\n %c",ch);
	printf("\n %d",i);
	printf("\n %f",f);
	printf("\n %lf",d);

	printf("\n\n\t Size of Variables ");
	printf("\n Size of Char : %d",sizeof(ch));
	printf("\n Size of Int : %d",sizeof(i));
	printf("\n Size of Float : %d",sizeof(f));
	printf("\n Size of Double : %d",sizeof(d));

	printf("\n\n\t Address of Each Variables ");
	printf("\n Address of Char : %p",&ch);
	printf("\n Address of Int : %p",&i);
	printf("\n Address of Float : %p",&f);
	printf("\n Address of Double : %p",&d);


	return 0;
}