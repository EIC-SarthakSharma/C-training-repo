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
        printf("%d is pushed into stack\n",a[top]);
    }
}

void pop(int a[])
{
    if(top==-1)
    {
        printf("Stack UnderFlow\n");
        //break;
    }
    else
    {
        printf("%d is popped from stack\n",a[top]);
        a[top]=-1;
        top--;
    }
}

void show(int a[])
{
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
    printf("]\n");
}



int main()
{
    int a[5];
    
    push(a,5);
    show(a);
    
    push(a,90);
    show(a);
    
    pop(a);
    show(a);
    
    push(a,67);
    show(a);
    
    push(a,905);
    show(a);
    
    pop(a);
    show(a);
    
    return 0;
}

