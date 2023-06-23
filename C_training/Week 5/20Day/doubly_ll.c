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

struct node *start=NULL; 

typedef struct node node;

node *create_node()
{
    int x;
    node *new=malloc(sizeof(node));
    printf("Enter Data of new node:");
    scanf("%d",&new->data);
    new->nxt=NULL;
    return new;
}

void insfrst()
{
    struct node *last;
    struct node *new=create_node();
    if(start==NULL)
    {
        start=new;
    }
    else
    {
        new->nxt=start;
        start->prev=new;
        start=new;
    }
}

void inslst()
{
    struct node *last;
    struct node *new=create_node();
    
    last=new;
    new->nxt=NULL;
    new->prev=last;
    last=new;
}

void doubll()
{
    int n;
    printf("Num of nodes:");
    scanf("%d",&n);
    
    node *new;
    node *last;
    
    //First Node;
    
    new=create_node();
    start=new;
    last=new;
    
    //For rest of the nodes
    for(int i=1;i<n;i++)
    {
        new=create_node();
        last->nxt=new;
        new->prev=last;
        last=new;
    }
}

void displl()
{
    printf("---------------------Linked List-------------------------\n");
    
    // Printing the Linked List;
    
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
    printf("%d ",ptr->data);
    ptr=ptr->nxt;
    }
    printf("\n");
}



int main()
{
    // scanll();
    doubll();
    
    displl();
    
    //insfrst();
    
    // displl();
    
    inslst();
    
    displl();
    return 0;
}