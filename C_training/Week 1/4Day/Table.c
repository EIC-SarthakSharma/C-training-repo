#include<stdio.h>
void main()
{
	int i,n,x;
	
	printf("Enter no.");
	scanf("%d",&n);
	printf("Enter no. upto which you want to print table:");
	scanf("%d",&x);
	printf("---------Table of %d---------------------\n",n);
	for(i=1;i<=x;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
    
}
