#include<stdio.h>
void main()
{
	int i,sum=0,n,rem,org,cube;
	printf("Enter a number: ");
	scanf("%d",&n);
	org=n;
	while(n>0)
	{
		rem=n%10;
		cube=rem*rem*rem;
		n=n/10;
		
		sum=sum+cube;
	}
	printf("Sum of cube of digits of %d is : %d\n",org,sum);	
	
	if(sum==org)
	{
		printf("%d is an Armstrong number",org);
	}
	else
	{
		printf("%d is not an Armstrong number",org);
	}
}
