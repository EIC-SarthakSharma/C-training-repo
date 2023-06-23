
#include<stdio.h>
void main()
{
	long i,rev=0,n,rem,org,gp;
	scanf("%li",&n);
	org=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		
		rev=rev*10+rem;
	}
	if(org==rev)
	{
		printf("Palindrome\n");
	}
	else
	{	
		printf("no. is not palindrome\n");
		gp=org;
		//printf("gp=%ld\n",gp);
		org=org/10;
		//printf("org=%ld\n",org);
		
			while(org>0)
			{
				rem=org%10;
				
				gp=gp*10+rem;	
				org=org/10;		
			}
		printf("%li\n",gp);
	}
}
