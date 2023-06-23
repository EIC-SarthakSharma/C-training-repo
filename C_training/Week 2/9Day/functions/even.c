#include<stdio.h>

int isev(int num)
{
	if(num % 2==0)
	{
		//printf("%d is even\n",num);
		return 1;
	}
	
	else
	{
		//printf("%d is odd\n",num);
		return 0;
	}
}

void main()
{
	int n;
	printf("Range = ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(isev(i)==1)
		{
			printf("%d is even\n",i);
		}
	}
	
}
