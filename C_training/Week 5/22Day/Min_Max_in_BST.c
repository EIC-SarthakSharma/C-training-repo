#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

typedef struct node node;


node *createnode(int data)
{
    node *new = malloc(sizeof(node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
return new;
}

node *insertbst(node *root,int data)
{
    if(data==-1)
    {
        return NULL;
    }
    if(root==NULL)
    {
        root = createnode(data);
    }
    else
    {
        if(data<root->data)
        {
            root->left=insertbst(root->left,data);
        }
        else
        {
            root->right=insertbst(root->right,data);
        }
    }
    return root;
}


node *takeinput(node *root)
{
    int no;
    printf("Enter data for binary search tree :");
    scanf("%d",&no);
    
    while(no!=-1)
    {
        root=insertbst(root,no);
        printf("Enter data for binary search tree :");
        scanf("%d",&no);
    }
    return root;
}

int min(node *root)
{
    if(root->left==NULL)
    {
        return root->data;
    }
    min(root->left);
}


int max(node *root)
{
    if(root->right==NULL)
    {
        return root->data;
    }
    max(root->right);
}


void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ->",root->data);
    inorder(root->right);
}
void main()
{
    node *root;
    root = takeinput(root);
    inorder(root);
    int x=min(root);
    int y=max(root);
    printf("End of Binary Search Tree\n");
    printf("Minimum elt in Binary Search Tree : %d\n",x);
    printf("Maximum elt in Binary Search Tree : %d\n",y);
}