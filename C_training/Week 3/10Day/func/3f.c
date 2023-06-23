#include<stdio.h>
int x=10;

void f1()
{
    printf(" %d ",x);
    x=x+1;
    printf(" f1*%d*f1 ",x);
}

void f2()
{
    int x=10;
    printf(" %d ",x);
    x=x+1;
    printf(" f2*%d*f2 ",x);
}

void f3()
{
    printf(" %d ",x);
    x=x+1;
    printf(" f3*%d*f3 ",x);
}

void main()
{
    x=x+1;
    printf("%d ",x);
    
    f1();
    printf("(pf1  %d  pf1)",x);
    
    f2();
    printf("(pf2  %d  pf2)",x);
    
    f3();
    printf("(pf3  %d  pf3)",x);
    
    
}


