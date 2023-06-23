#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node* createnode(int value)
{
    struct node *new = malloc(sizeof(struct node));
    new->data=value;
    new->left=NULL;
    new->right=NULL;
    
    return new;
}


struct node *creatree(struct node *temp_root)
{
    int data;
    printf("Enter Data for Node: ");
    scanf("%d",&data);
    printf("\n");
    
    
    if(data==-1)
    {
        return NULL;
    }
    
    temp_root=createnode(data);
    
   
    //left subtree
    printf("\n");
    printf("enter left element of (%d)\n",data);

    temp_root->left = creatree(temp_root);

    //right subtree
    printf("\n");
    printf("enter right element of (%d)\n",data);

    temp_root->right = creatree(temp_root);

    return temp_root;
}

int height(struct node *temp_root)
{
    
    if(temp_root==NULL)
    {
        return 0;
    }
    else
    {
        int hl,hr;
        int ht;
        hl=height(temp_root->left);   //left height
        hr=height(temp_root->right);   //Right height         
        
        if(hl>hr)
        {
            ht=hl+1;
        }
        
        else
        {
            ht=hr+1;
        }
        
        return ht;
    }
}

int main() 
{
    int ht;
    struct node *root;
    
    root=creatree(root);
    
    ht = height(root);
    printf("\nHeight of the tree is : %d\n",ht);
    
    return 0;
}