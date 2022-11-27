#include<stdio.h>

float AreaofCircle(float fVal1)
{
    float fout = 0.0;
    fout = 3.14*fVal1;
    return fout;
}

float CircumOfCircle(float fValue)
{
    float fOutput = 0.0;
    fOutput = 2*3.14*fValue;
    return fOutput;
}

int main()
{   
    float fPer = 0.0;
    
    printf("\n Enter Radius : ");
    scanf("%f",&fPer);

    float Area = 0.0;
    float Circum = 0.0;

    float (*FPtr)(float);
    FPtr = AreaofCircle;

    float (*FPtr2)(float);
    FPtr2 = CircumOfCircle;

    Area = FPtr(fPer);
    Circum = FPtr2(fPer);

    printf("\n Area of Circle : %f",Area);
    printf("\n Circum of Circle : %f",Circum);

    //float (*Ptr) = &fPer;

    //printf("\n Value of fPer : %f",fPer);
    //printf("\n Address of fPer : %p",&fPer);
    //printf("\n Value inside Ptr : %p",Ptr);
    //printf("\n Value refered by Ptr : %f",*Ptr);

    return 0;
}