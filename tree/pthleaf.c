#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * left,* right;
}node;


void path(struct node *root)
{
    int c=0;
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
    {
        printf("%d",root->data);
        c=1;
        return;
    }
    else
    {
        if(c==0)
        {
             return path(root->left);

        }
        if(c==1)
        {
            printf("%d",root->data);
            return;
        }


    }
}


int main()
{
    int lvl;
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
    struct node *k=(node*)malloc(sizeof(struct node));
    k->data=29;
    temp->right=k;
    t2->right=NULL;
    t2->left=NULL;
    struct node *t3=(node*)malloc(sizeof(struct node));
    t3->data=17;
    t1->right=t3;
    struct node *p=(node*)malloc(sizeof(struct node));
    p->data=5;
    t1->left=p;
    t3->right=NULL;
    t3->left=NULL;
    p->right=NULL;
    p->left=NULL;
    k->right=NULL;
    k->left=NULL;

    path(root);
    return 0;
}
