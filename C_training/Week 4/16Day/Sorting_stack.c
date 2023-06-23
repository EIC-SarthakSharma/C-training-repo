// Insert elemnt at bottom using Recursion
#include <stdio.h>
int top=-1;
int n=5;
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
        
        printf("\n%d is pushed into stack\n",a[top]);
        printf("top = %d",top);
    }
}

int pop(int a[])
{
    printf("top = %d\n",top);
    if(top<-1)
    {
        printf("Stack UnderFlow\n");
        return ;
    }
        //printf("\n%d is popped from stack\n",a[top]);
        //printf("top = %d\n",top);
        int x = a[top];
        //a[top]=-1;
        top--;
        return x;
    
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


int sorins(int stack[],int data)
{
    if (stack[top]<data)
    {
        push(stack,data);
        //printf("top = %d",top);
        return 0;
    }
    //else
    
        int x= pop(stack);
        sorins(stack,data);
        //printf("top = %d",top);
        push(stack,x);
        //printf("top = %d",top);
}


int sortstack(int stack[])
{
    //printf("top during sorting = %d\n",top);
    if(top==0){
        return;
    }
    
    int x= pop(stack);
    //printf("Value of x: %d\n",x);
    sortstack(stack);
    sorins(stack,x);
}

int main() 
{
    int sta[5];
    push(sta,10);
    push(sta,20);
     push(sta,320);
    push(sta,40);
    push(sta,5032);
    printf("\n-------The Stack is --------\n");
    show(sta);
    printf("\n-------The Stack after sorting is --------\n");
    sortstack(sta);
    show(sta);
    return 0;
}
// Insert elemnt at bottom using Recursion
#include <stdio.h>
int top=-1;
int n=5;
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
        
        printf("\n%d is pushed into stack\n",a[top]);
        printf("top = %d",top);
    }
}

int pop(int a[])
{
    printf("top = %d\n",top);
    if(top<-1)
    {
        printf("Stack UnderFlow\n");
        return ;
    }
        //printf("\n%d is popped from stack\n",a[top]);
        //printf("top = %d\n",top);
        int x = a[top];
        //a[top]=-1;
        top--;
        return x;
    
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


int sorins(int stack[],int data)
{
    if (stack[top]<data)
    {
        push(stack,data);
        //printf("top = %d",top);
        return 0;
    }
    //else
    
        int x= pop(stack);
        sorins(stack,data);
        //printf("top = %d",top);
        push(stack,x);
        //printf("top = %d",top);
}


int sortstack(int stack[])
{
    //printf("top during sorting = %d\n",top);
    if(top==0){
        return;
    }
    
    int x= pop(stack);
    //printf("Value of x: %d\n",x);
    sortstack(stack);
    sorins(stack,x);
}

int main() 
{
    int sta[5];
    push(sta,10);
    push(sta,20);
     push(sta,320);
    push(sta,40);
    push(sta,5032);
    printf("\n-------The Stack is --------\n");
    show(sta);
    printf("\n-------The Stack after sorting is --------\n");
    sortstack(sta);
    show(sta);
    return 0;
}
