// Insert elemnt at bottom using Recursion
#include <stdio.h>


int top=-1,n=5;

void push(int a[],int dt)
{
    if(top>=n-1)
    {
        printf("Stack OverFlow\n");
        //break;
    }
    else
    {
        top++;
        a[top]=dt;
        //printf("\n%d is pushed into stack\n",a[top]);
        //printf("top = %d",top);
    }
}

int pop(int a[])
{
    if(top==-1)
    {
        printf("Stack UnderFlow\n");
        //printf("top = %d",top);
        //break;
        return 0;
    }
    else
    {
        //printf("\n%d is popped from stack\n",a[top]);
        //printf("top = %d\n",top);
        int x = a[top];
        a[top]=-1;
        top--;
        return x;
    }
}



void show(int a[])
{
    
    printf("\n[");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");
}


int delmid(int stack[])
{
    if (top==(n/2))
    {
        pop(stack);
        //printf("top = %d",top);
        return;
    }
    //else
    
        int x= pop(stack);
        delmid(stack);
        //printf("top = %d",top);
        push(stack,x);
        //printf("top = %d",top);
        
    
}

int main() 
{
    int sta[5];
    push(sta,10);
    push(sta,20);
    push(sta,30);
    push(sta,40);
    push(sta,50);
    printf("\n-------The Stack is --------");
    show(sta);
    delmid(sta);
    printf("\n-------The Stack after inserting at bottom is --------");
    show(sta);
    return 0;
}