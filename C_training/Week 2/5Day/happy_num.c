#include<stdio.h>
void main()
{
	int num,max_itr=10,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	
	while(max_itr<10)
	{		
		while(num>0)
		{
			int rem;
			rem=num%10;
			num=num/10;
			sum=sum+rem*rem;
		}	
			printf("%d",num);
			
			max_itr--;		
			if(sum==1)
			{
				printf("%d is not a happy number\n",num);
			}
			
			else if(sum!=0)
			{
			
			}
		
	}
}

