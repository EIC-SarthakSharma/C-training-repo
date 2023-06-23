#include<stdio.h>

void main()
{
	int dl,pr,fine=0;
	printf("Late by how many days:");
	scanf("%d",&dl);
	printf("price of book:");
	scanf("%d",&pr);
	
		if(dl>=1 && dl<=5)
		{
			fine=dl*5;
			printf("Fine is : %d\n",fine);
		}
		if(dl>5 && dl<=10)
		{
			dl=dl-5;
			fine=25+dl*10;
			printf("Fine is : %d\n",fine);
		}
		if(dl>10 && dl<=30)
		{
			dl=dl-10;
			fine=75+dl*20;
			printf("Fine is : %d\n",fine);

		}
		if(dl>30)
		{
		    dl-=30;
		    fine=475+dl*20;
		
			if(fine<pr)
			{
			    printf("Fine is : %d\n",pr);
			}
			else
			{
				printf("Fine is : %d\n",fine);
			}
		}
}
