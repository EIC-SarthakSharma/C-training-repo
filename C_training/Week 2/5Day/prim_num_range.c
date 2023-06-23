#include<stdio.h>
void main()
{
	int i,rng;
	printf("Enter range:");
	scanf("%d",&rng);
	for(i=1;i<=rng;i++)
	{
	int n=i,flag=1;
	for(n=2;n<=i-1;n++)
	{
		if(i%n==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is prime\n",i);
	}
	}
}

