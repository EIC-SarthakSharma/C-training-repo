// Double Ended Queue.  
// Insert at front. 
#include <stdio.h>

int n=5,r=-1,f=-1;

void insatfr(int q[],int data)        // Double ended queue
{
    if(f==0 && r==n-1){
    printf("Queue Overflow\n");
    return ;
    }
    
        if(f==-1)
    {
        f=0;
        n=0;
    }
    if(r==n-1)
    {
        printf("r=%d \nNow Incremented\n",r);
        r=-1;
    }
    r+=1;
    q[r]=data;
    
    printf("%d is inserted in Queue \nand Rear Pointer = %d\n",q[r],r);
}

void show(int q[5])
{
    
    printf("\n[");
    for(int i=f;i<=r;i++)
    {
        printf(" %d ",q[i]);
    }
    printf("];\n");
}

int main()
{
    int q[n];
    insatfr(q,10);
    show(q);
    insatfr(q,170);
    show(q);
    insatfr(q,710);
    show(q);
    insatfr(q,107);
    show(q);
    insatfr(q,197);
    show(q);
    insatfr(q,127);
    show(q);
    insatfr(q,567);
    show(q);
    
    return 0;
}