// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *nxt;
};

struct node *start; 

int main() 
{
    typedef struct node node;
    
    node *n1= malloc(sizeof(node));
    node *n2= malloc(sizeof(node));
    node *n3= malloc(sizeof(node));
    
    // printf("%d\n",sizeof(node));
    
    n1-> data=420;
    
    printf("Data in n1: %d\n",n1->data);
    
    n1 -> nxt =n2;
    
    start=n1;
    
    n2->data=900;
    
    printf("Data in n2: %d\n",n2->data);
    
    n2->nxt=n3;
    
    n3->data=8085;
    
    printf("Data in n3: %d\n",n3->data);
    
    n3->nxt=NULL;
    
    // Printing the Linked List;
    
    struct node *ptr;
    ptr=start;
    int i=0;
    
    while(ptr->nxt != NULL)
    {
        printf("Node %d - Data = %d \n",i+1,ptr->data);
        i++;
        ptr =ptr->nxt;
        
    }
     printf("Node %d - Data = %d \n",i+1,ptr->data);
    return 0;
}