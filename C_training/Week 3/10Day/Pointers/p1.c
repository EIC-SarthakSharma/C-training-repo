#include<stdio.h>

void main()
{
    int a=10;
    int b=20;
    
    int *p;
    int *q;
    
    p=&a;
    q=&b;
    
//    printf("Address of a: %d\n",p);
 //   printf("Address of b: %d\n",q);
    
    *p+=10;
    *q+=10;
    
    p=q;
    
    *p+=10;
    *q+=10;
    
    a+=5;
    b+=5;
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("p = %d\n",p);
    printf("q = %d\n",q);
    
    
}
