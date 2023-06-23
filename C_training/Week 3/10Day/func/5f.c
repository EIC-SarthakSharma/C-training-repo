#include<stdio.h>
int x=10;

int f1(int a)
{
    static int c=0;
    c+=a;
    return c;
}

void main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        j=f1(i);
    }
    
    printf("%d",j);
}


