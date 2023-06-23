
// Reversing a string

#include <stdio.h>
#include<string.h>
int top=-1,n=5;


void push(char a[],int dt)
{
    //int n=strlen(a);
    if(top>=5-1)
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

int pop(char a[])
{
    //int n=strlen(a);
    if(top==-1)
    {
        printf("Stack UnderFlow\n");
        //break;
    }
    else
    {
        //printf("%d is popped from stack\n",a[top]);
        return a[top];
        a[top]=-1;
        top--;
    }
}

void show(int a[])
{
    printf("[");
    for(int i=0;i<5;i++)
    {
        printf("%d ,",a[i]);
    }
    printf("]\n");
}



int main()
{
    char a[5]="Hello";
    //scanf("%s",&a);
    char tmp[5];
    char rev[5];
    for(int i=0;i<5;i++)
    {
        push(tmp,a[i]);
    }
    
    printf("%s\n",tmp);
    
    for(int i=0;i<5;i++)
    {
        rev[i]=pop(tmp);
        top--;
    }
    
    printf("%s",rev);
    
    return 0;
}

