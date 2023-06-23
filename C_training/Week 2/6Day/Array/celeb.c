// Online C compiler to run C program online
#include <stdio.h>

void main() 
{
    int n;
    printf("Enter number of people in party:");
    scanf("%d",&n);
    
    int M[n][n];
    printf("Enter 1 if a person knows another (Enter Zero if both person are same)");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\n%d knows %d ? :",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
