// Online C compiler to run C program online
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
    printf("\nEnter Data for Node: ");
    scanf("%d",&data);
    
    
    if(data==-1)
    {
        return NULL;
    }
    
    temp_root=createnode(data);
    
   
    //left subtree
    printf("enter left element of (%d)\n",data);

    temp_root->left = creatree(temp_root);

    //right subtree
    printf("enter right element of (%d)\n",data);

    temp_root->right = creatree(temp_root);

    return temp_root;
}

// void inorder()


void postorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
        postorder(root->left);
        postorder(root->right);
        printf("%d -> ",root->data);
        
}



int main() 
{
    
    struct node *nd;
    
    nd=creatree(nd);
    postorder(nd);
    printf("End of tree\n");
    return 0;
}