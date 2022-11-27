#include<stdio.h>

int TotalMarks(int iValue1 , int iValue2, int iValue3 , int iValue4, int iValue5)
{
	int iOutput = 0;

	iOutput = iValue1+iValue2+iValue3+iValue4+iValue5;

	return iOutput;
}

float Percentage(float fVal)
{
	float fOut = 0.0;

	fOut = fVal/5;

	return fOut;
}

int main()
{
	int iSubject1 = 0;
	int iSubject2 = 0;
	int iSubject3 = 0;
	int iSubject4 = 0;
	int iSubject5 = 0;

	printf("\n Enter Marks for English : ");
	scanf("%d",&iSubject1);

	printf("\n Enter Marks for Science : ");
	scanf("%d",&iSubject2);

	printf("\n Enter Marks for Maths : ");
	scanf("%d",&iSubject3);

	printf("\n Enter Marks for Social Science : ");
	scanf("%d",&iSubject4);

	printf("\n Enter Marks for Marathi : ");
	scanf("%d",&iSubject5);
	
	int iTotalMarks = 0;
	float fPercentage = 0.0;

	iTotalMarks = TotalMarks(iSubject1,iSubject2,iSubject3,iSubject4,iSubject5);
	fPercentage = Percentage(iTotalMarks);

	printf("\n Total Marks = %d",iTotalMarks);
	printf("\n Percentage = %f %%\n",fPercentage);

	return 0;
}