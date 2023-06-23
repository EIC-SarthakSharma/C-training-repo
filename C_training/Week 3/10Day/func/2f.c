#include<stdio.h>

void f1()
{
    static int x=10;
    x+=1;
    printf("%d,",x);
}

void f2()
{
    static int x;
    x=10;
    x+=1;
    printf("%d ,",x);
}
void main()
{
    f1();
    f1();
    f2();
    f2();
}
