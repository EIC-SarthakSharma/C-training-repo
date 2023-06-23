#include<stdio.h>

int ispr(int num,int rng)
{
		
	for(int i=1;i<=rng;i++)
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
		flag=1;
	}
	}
	
	return flag;
}

void main()
{
	int rng;
	printf("Range = ");
	scanf("%d",&rng);
	for(int i=1;i<=n;i++)
	{
		if(ispr(i)==1)
		{
			printf("%d is prime\n",i);
		}
	}
	
}
