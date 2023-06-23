// Insert elemnt at bottom using Recursion
#include <stdio.h>


int top=-1,n=5;

void push(int a[],int dt)
{
    if(top>=n)
    {
        printf("Stack OverFlow\n");
        //break;
    }
    else
    {
        top++;
        a[top]=dt;
        
        // printf("\n%d is pushed into stack\n",a[top]);
        // printf("top = %d",top);
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
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");
}


int sorins(int stack[],int data)
{
    if (stack[top]<data)
    {
        push(stack,data);
        //printf("top = %d",top);
        return;
    }
    //else
    
        int x= pop(stack);
        sorins(stack,data);
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
    sorins(sta,22);
    printf("\n-------The Stack after inserting element in middle is --------");
    show(sta);
    return 0;
}