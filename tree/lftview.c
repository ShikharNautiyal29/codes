#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * left,* right;
}node;


void check(struct node *root)
{
    if(root==0)
        return ;
    else
    {
        printf("%d\n",root->data);
        if(root->left!=NULL || root->right!=NULL)
        {
        check(root->left);

        check(root->right);
        }
        if(root->right==NULL && root->left==NULL)
        {
            exit(1);
        }
    }


}



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
    int lvl,g;
    struct node *root=(node*)malloc(sizeof(struct node));
    root->data=5;
    //struct node *temp=(node*)malloc(sizeof(struct node));
    //temp->data=15;
    root->left=NULL;
    struct node *t1=(node*)malloc(sizeof(struct node));
    t1->data=20;
    root->right=t1;
    //struct node *t2=(node*)malloc(sizeof(struct node));
    //t2->data=21;
    //temp->left=NULL;
    //struct node *k=(node*)malloc(sizeof(struct node));
    //k->data=29;
    //temp->right=k;
    //t2->right=NULL;
    //t2->left=NULL;
    struct node *t3=(node*)malloc(sizeof(struct node));
    t3->data=17;
    t1->right=t3;
    struct node *p=(node*)malloc(sizeof(struct node));
    p->data=8;
    t1->left=p;
    t3->right=NULL;
    t3->left=NULL;
    p->right=NULL;
    p->left=NULL;
    //k->right=NULL;
    //k->left=NULL;
    lvl=ht(root);

    check(root);
    return 0;
}


