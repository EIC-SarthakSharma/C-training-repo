// Online C compiler to run C program online
#include <stdio.h>

int n=5,r=-1,f=-1;

void enqueue(int q[],int data)
{
    if((f==0 && r==n-1) || (r==f-1))   // Condition for Queue is full
    {
        printf("Queue is full");
    }
    if(f==-1)
    {
        f=0;
        r=0;
    }
    if(r==n-1)
    {
        r=0;        // Condition when we are adding elt of queue and we reach end of queue and space avl at start(due to dequeueing) so new elt is added 
    }
    else
    {
    r+=1;       // increment of rear ptr.
    }
    
    
    q[r]=data;
    
    printf("%d is inserted in Queue \nand Rear Pointer = %d\n",q[r],r);
}

void dequeue(int q[5])
{
    int x;
    if(f==-1)
    {
        printf("Khatam ! Tata ! Good Bye ! Gaya ! Thai Gyoo ! Pati Gayo!");
    }
    else
    {
            int x = q[f];   
        if(f==r)
        {
 
            printf("%d is dequeued from Queue\nNow Front = %d\n",x,f);
            f=-1;
            r=-1;
        }
        else
        {
            //int x = q[f];
            printf("%d is dequeued from Queue\nNow Front = %d\n",x,f);
            f+=1;
        }
       
    
//return x;
}
}

int show(int q[5])
{
    if(r==-1)
    {
        printf("\nEmpty queue");
        return 1;
    }
    printf("\n[");
    if(r>f)
    {
        for(int i=f;i<r;i++)
    {
        printf(" %d ",q[i]);
    }
    }
    else
    {
        for(int i=f;i<n;i++)
        {
            printf(" %d ",q[i]);
        }
        for(int i=0;i<=f;i++)
        {
             printf(" %d ",q[i]);
        }
    }
    
    printf("]\n");
    
}


/*---------------------------------------------------------------------------*/
int main() 
{
    int queue[n];
    enqueue(queue,10);
    show(queue);
    enqueue(queue,20);
    show(queue);
    enqueue(queue,30);
    show(queue);
    enqueue(queue,40);
    show(queue);
    enqueue(queue,50);
    show(queue);
    dequeue(queue);
    
    
    
    return 0;
}