#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * left,* right;
}node;

int ht(struct node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return max(ht(root->left),ht(root->right))+1;
    }
}

int max(struct node *a, struct node *b)
{
    if(a>b)
        return 1;
    else
        return 1;
}

int main()
{
    int h;
    struct node *root=(node*)malloc(sizeof(struct node));
    root->data=1;
    struct node *temp=(node*)malloc(sizeof(struct node));
    temp->data=2;
    root->left=temp;
    struct node *t1=(node*)malloc(sizeof(struct node));
    t1->data=3;
    root->right=t1;
    struct node *t2=(node*)malloc(sizeof(struct node));
    t2->data=4;
    temp->left=NULL;
    temp->right=t2;
    t1->right=NULL;
    t1->left=NULL;
    t2->right=NULL;
    t2->left=NULL;
    h=ht(root);
    printf("%d",h);
    return 0;
}
