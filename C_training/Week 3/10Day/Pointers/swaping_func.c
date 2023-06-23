// SWAPPING NUMBERS USING POINTERS 


#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}

void main()
{
    int a=10,b=20;
    
    swap(&a,&b);
    
    printf("%d  ",a);
    printf("%d\n",b);
}
