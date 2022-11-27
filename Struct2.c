#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
    struct Demo *Ptr ;

};


int main()
{
    struct Demo dobj;

    dobj.i = 100;

    printf("Value of I : %d",dobj.i);

    Ptr = &dobj;

    
    return 0;
}