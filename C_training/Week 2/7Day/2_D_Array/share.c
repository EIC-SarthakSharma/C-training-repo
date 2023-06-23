// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int A[7]={100,180,260,310,40,535,695};
    for(int p=0;p<7;p++)
    {
        printf("Price on Day %d : %d\n",p+1,A[p]);
    }
    int max,bd,sd,diff;
    
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            int max=A[i];
            
            /*if(A[i]<max)
            {
            	max=A[i];
            }*/
            
            diff=A[j]-max;
            if(diff<0)
            {
                bd=i;
                sd=j-1;
                diff=A[j-1]-max;
                break;
            }
            
        }break;
        
    }
    printf("Buy the stock on Day %d and sell on %d\nYour Profit will be : %d\n",bd+1,sd+1,diff);
    
}
