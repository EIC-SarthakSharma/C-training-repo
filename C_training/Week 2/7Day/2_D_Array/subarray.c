// program for creating array

#include <stdio.h>

void main() 
{
    int a[5]={1,2,3,7,5};
    int st,ed;
    
   	int s=12;
   	for(int l=0;l<5;l++)
   	{
   	   	printf("%d ",a[l]);
   	}
   	printf("\n");
   	for(int i=1;i<=5;i++)
    {
    	int sum=a[i];
    	
    	for(int j=i+1;j<=5;j++)
    	{
    		sum=sum+a[j];
    		
    		if(sum==s)
    		{
    			st=i;
    			ed=j;
    			printf("\n%d %d\n",st,ed);
    			
    
    			for(int k=st;k<=ed;k++)
	    		{
    				printf("[%d]",a[k]);
   				}
   				
   				break;
    		}
    	}
    }
    printf("\n");
    //printf("%d %d\n",st,ed);
    
}
