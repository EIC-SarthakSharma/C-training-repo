#include <stdio.h>

int main()
{
    int c,d,temp;
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");
    scanf("%d",&d);
    
    temp =c;
    c=d;
    d=temp;
    
    printf("The Interchanged value of c is : %d",c);
    printf("\nThe Interchanged value of d is : %d",d);
}

