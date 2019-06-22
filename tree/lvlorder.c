#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * left,* right;
}node;


void check(struct node *root,int lvl)
{

    if(root==NULL)
        return ;
    if(lvl==0)
        printf("%d ",root->data);
    else
    {
        if(lvl%2==0){

        check(root->left,lvl-1);
        check(root->right,lvl-1);}
        else
        {

        check(root->right,lvl-1);
        check(root->left,lvl-1);
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
    lvl=ht(root);
    //printf("%d",lvl);
    for(int i=0;i<=lvl;i++)
    {
        check(root,i);
        printf("\n");
    }

    return 0;
}

