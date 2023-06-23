// Online C compiler to run C program online
#include <stdio.h>



void main() 
{
    int a=100,b=345;
    int addn;
    int *p;
    int *l;
    int **q;
    int ***r;
    
    p=&a;
    q=&p;
    r=&q;
    
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***r);
    
    // AT p=&b;
    
    l=&b;
    
    addn=*l+**q;
    printf("%d\n",addn);
}
