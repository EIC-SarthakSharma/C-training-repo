#include<stdio.h>
void main()
{
	int i,sum=0,n,rem,org;
	printf("Enter a number: ");
	scanf("%d",&n);
	org=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		
		sum=sum+rem;
	}
	printf("Sum of digits of %d is : %d\n",org,sum);	
}
