// program for creating array

#include <stdio.h>

void main() 
{
    int i,a[5],m_e;
    int A[4]={1,2,3,5};
 // program for creating and printing array   
  	for(int m=1;m<=5;m++)
    	{
    		a[m-1]=m;
    	}
    
    
    for(i=0;i<5;i++)
    {
    	printf("%d ",a[i]);
    }
    printf("\n");
    
    for(int j=0;j<5;j++)
    {
    	printf("%d ",A[j]);
    }
    printf("\n");
    
    // Program to find missing element
    int sum1=0;
    for(int p=0;p<5;p++)
    {
    	sum1=sum1+a[p];
    }
    printf("%d\n",sum1);
    
    int sum2=0;
    
    for(int q=1;q<=4;q++)
    {
    	sum2=sum2+A[q];
    }
    printf("%d\n",sum2);
    
    m_e=sum1-sum2;
    
    printf("Missing element is: %d\n",m_e);
}
