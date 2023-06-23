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
            printf("\n%d knows %d ? :",i+1,j+1);
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
    int m,cnt_rws=0,cnt_col=0,celeb_col,celeb_rws;
    m=n;
    for(int j=0;j<=m;j++)
    {
        for(int k=0;k<=m;k++)
        {
            if(M[j][k]==1)
            {
                cnt_col++;
                celeb_col=k;
            }
            else if(M[k][j]==1)
            {
                cnt_rws++;
                celeb_rws=j;
            }
        }
    }
    
    printf("col : %d\n rws:%d\n",cnt_col,cnt_rws);
    if(cnt_rws>cnt_col)
    {
        printf("%d is celebrity\n",celeb_rws);
    }
    else
    {
        printf("%d is celebrity\n",celeb_col);
    }
}
