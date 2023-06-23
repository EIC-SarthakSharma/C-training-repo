// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int n;
struct node
{
    int data;
    struct node *nxt;
    struct node *prev;
};

struct node *start; 

typedef struct node node;

node *create_node()
{
    int x;
    node *new=malloc(sizeof(node));
    printf("Enter Data of node:");
    scanf("%d",&new->data);
    new->nxt=NULL;
    return new;
}

void insertelt()
{
    struct node *last;
    struct node *new=create_node();
    if(start==NULL)
    {
        start=new;
        last=new;
        new->nxt=start;
    }
    else
    {
        new->nxt=start;
        start=new;
        last->nxt=start;
    }
}



void displl()
{
    printf("---------------------Linked List-------------------------\n");
    
    // Printing the Linked List;
    if(start==NULL)
    {
        printf("Empty Linked list\n");
    }
    else
    {
    struct node *ptr;
    ptr=start;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->nxt;
    }while(ptr!=start);
}
}


int main()
{
    // scanll();
    insertelt();
    displl();
    return 0;
}