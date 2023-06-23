// Online C compiler to run C program online
#include <stdio.h>

int n=5,r=-1,f=-1;

void enqueue(int q[],int data)
{
    if(r>n)
    {
        printf("Queue Overflow");
        
    }
    f=0;
    r+=1;
    q[r]=data;
    
    printf("%d is inserted in Queue \nand Rear Pointer = %d\n",q[r],r);
}

int dequeue(int q[5])
{
    int x;
    if(f==-1)
    {
        printf("Queue Underflow");
        return 0;
    }
    else
    {
        if(f==r)
        {
            int x = q[f];
            printf("%d is dequeued from Queue\nNow Front = %d\n",x,f);
            f=-1;
            r=-1;
        }
        else
        {
            int x = q[f];
            printf("%d is dequeued from Queue\nNow Front = %d\n",x,f);
            f+=1;
        }
    }   
    
return x;
}

void show(int q[5])
{
    
    printf("\n[");
    for(int i=f;i<=r;i++)
    {
        printf(" %d ",q[i]);
    }
    printf("]\n");
}

int main() 
{
    int queue[n];
    enqueue(queue,10);
    show(queue);
    
    enqueue(queue,110);
    show(queue);
    
    enqueue(queue,130);
    show(queue);
    
    enqueue(queue,167);
    show(queue);
    
    dequeue(queue);
    show(queue);
    
    dequeue(queue);
    show(queue);
    
    dequeue(queue);
    show(queue);
    
    
    dequeue(queue);
    dequeue(queue);
    return 0;
}