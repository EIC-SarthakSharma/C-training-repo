#include <stdio.h>

void main()
{
    int tcp,tsp,pr,ecp;
    printf("Enter total SP : ");
    scanf("%d",&tsp);
    
    printf("Enter total profit : ");
    scanf("%d",&pr);
    
    tcp=pr+tsp;
    
    ecp=tcp/15;
    
    printf("CP of Each item is : %d",ecp);
}

