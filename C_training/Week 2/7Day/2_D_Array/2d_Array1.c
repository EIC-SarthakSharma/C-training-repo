
#include <stdio.h>

void main() 
{
    int a,b;
    printf("Enter number of rows:");
    scanf("%d",&a);
    
    printf("Enter number of columns:");
    scanf("%d",&b);
    
    int M[a][b];
    printf("Enter Data\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter data for element[%d][%d] :",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
