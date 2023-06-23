#include<stdio.h>
#include<math.h>
void main()
{
	int i,y=0,x;
	
	printf("Enter x.");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	printf("---------%d^y is upto power %d---------------------\n",x,y);
	for(i=1;i<=y;i++)
	{
		printf("%d ^ %d = %f\n",x,i,pow(x,i));
	}
    
}
