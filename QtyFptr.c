#include<stdio.h>

int Price(int iVal1 , int iVal2)
{
    int iOut = 0;
    iOut = iVal1 * iVal2;
    return iOut;
}

float Discount(float fVal)
{
    float fOut = 0;
    fOut = (fVal/100)*5;
    return fOut;
}

float TotalPrice(float fVal1 , float fVal2)
{
    float fOut1 = 0;
    fOut1 = fVal1 - fVal2;
    return fOut1;
}

int main()
{
    int iQty = 00;
    int iRate = 0;
    int iPrice = 0;
    float fDiscount = 0.0;
    float fTotalPrice = 0.0;

    printf("\n Enter Quantity : ");
    scanf("%d",&iQty);
    printf("\n Enter Rate : ");
    scanf("%d",&iRate);
    printf("\n Enter %% Discount : ");
    scanf("%d",&fDiscount);

    int (*FPtr1)(int , int);
    FPtr1 = Price;

    float (*FPtr2)(float);
    FPtr2 = Discount;

    float (*FPtr3)(float,float);
    FPtr3 = TotalPrice;

    iPrice = FPtr1(iQty,iRate);
    fDiscount = FPtr2(iPrice);
    fTotalPrice = FPtr3(iPrice,fDiscount); 

    printf("\n Price : %d",iPrice);
    printf("\n Discount Price : %f",fDiscount);
    printf("\n Total Price : %f",fTotalPrice);

    return 0;
}