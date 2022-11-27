#include<stdio.h>

struct Hello
{
    int A;
    float B;
    char C;

};

struct Demo
{
    int i;
    //char ch1;
    float f1;
    //char ch2;
    double d;
};

union Name
{
    int X;
    float Y;
    double Z;
};

int main()
{
    struct Demo dobj;
    struct Hello Hobj;
    union Name Nobj;

    Nobj.Y = 11.04;

    printf("\n Size of Structiure : %d",sizeof(dobj));
    printf("\n Size of Hello : %d",sizeof(Hobj));
    printf("\n Size of Union : %d",sizeof(Nobj));

    printf("\n %f",Nobj.Y);

    return 0;
}