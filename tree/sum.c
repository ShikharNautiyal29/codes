#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * left,* right;
}node;

int summ(struct node *root)
{
    if(root==NULL)
        return 0;
    else
    {
        return summ(root->left)+summ(root->right)+root->data;
    }
}


int main()
{
    int s;
    struct node *root=(node*)malloc(sizeof(struct node));
    root->data=5;
    struct node *temp=(node*)malloc(sizeof(struct node));
    temp->data=15;
    root->left=temp;

    struct node *t1=(node*)malloc(sizeof(struct node));
    t1->data=20;
    root->right=t1;
    struct node *t2=(node*)malloc(sizeof(struct node));
    t2->data=21;
    temp->left=t2;
    temp->right=NULL;
    t2->right=NULL;
    t2->left=NULL;
    struct node *t3=(node*)malloc(sizeof(struct node));
    t3->data=17;
    t1->right=t3;
    t1->left=NULL;
    t3->right=NULL;
    t3->left=NULL;
    s=summ(root);
    printf("%d",s);
    return 0;
}

