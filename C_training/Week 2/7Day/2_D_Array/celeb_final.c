// program for creating array

#include <stdio.h>

void main() 
{
    int n;
    printf("Enter number of people in party:");
    scanf("%d",&n);
    
    int M[n][n];
    printf("Enter 1 if a person knows another (Enter Zero if both person are same)\n");
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d knows %d ? :",i+1,j+1);
            scanf("%d",&M[i][j]);
        }printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    

// Program for finding celebrity
    
    int m,celeb_row;
    m=n;//size
    
    
    
    for(int j=0;j<m;j++)
    {
    	int sum_rws=0;
        for(int k=0;k<m;k++)
        {
            sum_rws=sum_rws+M[j][k];
            
        }
        
        if(sum_rws==0)
        {
        	celeb_row=j;
        	
        }
    }
    
    printf("\nCelebrity row = %d",celeb_row+1);
    
    int sum_col=0;
    for(int a=0;a<m;a++)
    {
    	sum_col=sum_col+M[a][celeb_row];
    	
    }printf("\nSum of elements of column number %d = %d",celeb_row+1,sum_col);
    
    if(sum_col==m-1)
    {
        printf("\n%d is celebrity\n",celeb_row+1);
    }
    else
    {
    	printf("No Celebrity!\n");
    }
}
