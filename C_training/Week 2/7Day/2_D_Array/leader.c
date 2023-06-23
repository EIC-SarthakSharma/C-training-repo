// program for creating array

#include <stdio.h>

void main() 
{
    int a[6]={16,17,4,3,5,2};
    
    int ldr[0];
    
	
	
	for(int i=0;i<6;i++)
	{
		int flag=0;
		//printf("Selected elt. to compare: %d\n",a[i]);
		
		for(int p=i+1;p<5;p++)
		{			
			if(a[i]<a[p])
			{
				flag=1;
				//break;
			}
			
			
		}
		
		if(flag==0)
			{
				printf("%d is leader\n",a[i]);
			}
	}	
	
	//printf("%d is a leader by Default\n",a[5]);
}
