#include<stdio.h>
void main()
{
	int i,rev=0,n,rem,org;
	printf("Enter a number: ");
	scanf("%d",&n);
	org=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		
		rev=rev*10+rem;
	}
	if(org==rev)
	{
		printf("%d is rev of %d \nand It is a Palindrome\n",rev,org);
	}
	else
	{
		printf("%d is rev of %d \nand It is not a Palindrome\n",rev,org);
	}	
}
