#include<stdio.h>
void main()
{
	int i,sum=0,rem,org,cube,rng,nn;
	printf("Enter range(default starting from 1): ");
	scanf("%d",&rng);
	
	for(i=1;i<=rng;i++)
	{
		int n=i,sum=0;

		org=n;
		while(n>0)
		{
			
			rem=n%10;
			cube=rem*rem*rem;
			n=n/10;
			
			sum=sum+cube;
		}
			
		if(sum==org)
			{
				printf("%d is an Armstrong number\n",org);
			}
		
		
	}
}
