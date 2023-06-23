#include<stdio.h>
void main()
{
	int i=0,sum=1,y=1,n;
     printf("Enter no. whose table you want:");
     scanf("%d",&n);
    
    while(i<=10)
    {
        sum=n*i;
        printf("%d * %d = %d\n",n,i,sum);
        i+=1;
        y+=1;
        
    }
}
