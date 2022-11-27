#include<stdio.h>

float SimpleIntrest(float fValue1 , float fValue2 , float fValue3)
{
	float fSI = 0;

	fSI = (fValue1*fValue2*fValue3)/100.0;

	return fSI;
}

float main()
{
	float fAmount = 0.0;
	float fRate = 0.0;
	float fTime = 0.0;

	printf("\n Enter Amount in Rs : ");
	scanf("%f",&fAmount);

	printf("\n Enter Percentage Rate : ");
	scanf("%f",&fRate);

	printf("\n Enter Time in Years : ");
	scanf("%f",&fTime);

	float fSimpleIntrest = 0.0;

	fSimpleIntrest = SimpleIntrest(fAmount,fRate,fTime);

	printf("\n Simple Intrest : %f",fSimpleIntrest);

	return 0.0;
}