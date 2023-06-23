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


void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
        inorder(root->left);
        printf("%d -> ",root->data);
        inorder(root->right);
        
}

struct node *mirrorrtree(struct node *temp_root)
{
    struct node *tmp;
    
    if(temp_root==NULL)
    {
        return 0;
    }
    
        tmp=temp_root->left;
        temp_root->left=temp_root->right;
        temp_root->right=tmp;
        
        temp_root->right=mirrorrtree(temp_root->right);
        temp_root->left=mirrorrtree(temp_root->left);
        
    return temp_root;
}


int main() 
{
    struct node *root;
    
    
    root=creatree(root);
    printf("--------------In-order traveral of original tree-----------\n");
    inorder(root);
    printf("End of tree\n");
    
    printf("\n");
    
    root=mirrorrtree(root);
    printf("--------------In-order traveral of Mirrorred tree-----------\n");
    inorder(root);
    printf("End of tree\n");
    return 0;
}