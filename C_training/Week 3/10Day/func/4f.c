#include<stdio.h>
int x=10;

int f1()
{
    static int x=7;
    return x--;
}

void main()
{
    for(f1();f1();f1())
    {
        printf(" %d ,",f1());
    }
}
