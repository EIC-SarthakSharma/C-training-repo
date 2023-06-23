// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int n;
struct node
{
    int data;
    struct node *nxt;
};

struct node *start; 

typedef struct node node;

int scanll() 
{
    
    
    node *new=malloc(sizeof(node));
    //printf("%ld\n",sizeof(node));
    
    struct node *temp;
    
    //int n;
    printf("How many nodes? :");
    scanf("%d",&n);
    // Initialization of Linked List By taking first node's data from user;
    
    start=new;
    
    printf("Data of Node 1:");
    scanf("%d",&new->data);
    new->nxt=NULL;
    
    temp=new;
    
    for(int i=1;i<n;i++)
    {
        node *new=malloc(sizeof(node));
        printf("Data of Node %d:",i+1);
        scanf("%d",&new->data);
        new->nxt=NULL;
        temp->nxt=new;
        temp=new;
    }
    
    return 0;
}

void ins_at_end()
{
    struct node *ptr;
    
    int new_data;
    printf("\nData of Node %d:",n+1);
    scanf("%d",&new_data);
    node *new=malloc(sizeof(node));
    ptr=start;
    
    while (ptr->nxt!=NULL)
    {
        ptr=ptr->nxt;
    }
    
    ptr->nxt=new;
    new->data=new_data;
    new->nxt=NULL;
}

void displl()
{
    printf("---------------------Linked List-------------------------\n");
    
    // Printing the Linked List;
    
    node *ptr;
    ptr=start;
    int i=0;
    
    while(ptr != NULL)
    {
        printf("Node %d - Data = %d \n",i+1,ptr->data);
        i++;
        ptr = ptr->nxt;
        
    }
}


int main()
{
    scanll();
    displl();
    ins_at_end();
    displl();
    return 0;
}