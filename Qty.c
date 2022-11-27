#include<Stdio.h>

int TotalPrice(int iValue1 , int iValue2)
{
	int iOutput = 0;

	iOutput = iValue1*iValue2;

	return iOutput;
}

float Discount(float fValue)
{
	float fOutput = 0;

	fOutput = (fValue/100)*10;

	return fOutput;
}

float FinalPrice(float fValue1,float fValue2)
{
	float fFPoutput = 0;

	fFPoutput = fValue1 - fValue2;

	return fFPoutput;
}

int main()
{
	int iQuantity = 0;
	int iRate = 0;
	int iPrice = 0;
	float fDiscount = 0.0;
	float fFinalPrice = 0.0;

	printf("\n Enter Quantity : ");
	scanf("%d",&iQuantity);

	printf("\n Enter Rate : ");
	scanf("%d",&iRate);

	iPrice = TotalPrice(iQuantity,iRate);
	fDiscount = Discount(iPrice);
	fFinalPrice = FinalPrice(iPrice,fDiscount);

	printf("\n Total Price is : %d\n",iPrice);

	printf("\n 10%% Discount : %f\n",fDiscount);

	printf("------------------------------");

	printf("\n Final Price : %f Rs Only \n",fFinalPrice);

	printf("\n ---- THANK YOU ---- ");

	printf("\n ---- VISIT AGAIN ---- \n ");

	return 0;
}