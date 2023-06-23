#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    
    printf("Enter b:");
    scanf("%d",&b);
    
    a=a+b;      //a=a*b;
    b=a-b;      //a=a/b;
    a=a-b;      //b=a/b;
    
    printf("\nSwapped values are: %d and %d \n",a,b);
}

