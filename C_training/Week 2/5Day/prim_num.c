#include<stdio.h>
void main()
{
	int i,flag=1,n;
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	if(flag==1)
	{
		printf("%d is prime\n",n);
	}
	else
	{
		printf("%d is not prime\n",n);
	}
}

