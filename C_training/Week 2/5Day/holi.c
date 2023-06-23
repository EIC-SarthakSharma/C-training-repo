#include<stdio.h>
void main()
{
	int n,i,date,hd=8;
	printf("Enter no. of holidays:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter date %d:",i);
		scanf("%d",&date);
	

		if(date==6 || date==7 || date==13 || date==14 || date==20 || date==21 || date==27 || date==28)
		{
			hd=hd;
		
		}
		
		else
		{	
			hd=hd+1;
		}
	}
	printf("%d holidays in this Month\n",hd);
}
