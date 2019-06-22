#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * left,* right;
}node;


int check(struct node *root,struct node *root1)
{
    if(root==NULL && root1==NULL)
        return 1;
    if(root==NULL || root1==NULL)
        return 0;
    if(root->data==root1->data)
    {
        return check(root->left,root1->left) && check(root->right,root1->right);

    }
}


int main()
{
    int c;
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

    struct node *root1=(node*)malloc(sizeof(struct node));
    root1->data=5;
    struct node *temp1=(node*)malloc(sizeof(struct node));
    temp1->data=15;
    root1->left=temp1;
    struct node *t11=(node*)malloc(sizeof(struct node));
    t11->data=20;
    root1->right=t11;
    struct node *t21=(node*)malloc(sizeof(struct node));
    t21->data=21;
    temp1->left=t21;
    temp1->right=NULL;
    t21->right=NULL;
    t21->left=NULL;
    struct node *t31=(node*)malloc(sizeof(struct node));
    t31->data=17;
    t11->right=t31;
    t11->left=NULL;
    t31->right=NULL;
    t31->left=NULL;
    if(check(root,root1))
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}

