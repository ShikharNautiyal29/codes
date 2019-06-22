#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
struct node* head;
void insert(int x)
{
    struct node *temp=(node*)malloc(sizeof(struct node)),*lst;
    lst=head;
    temp->data=x;
        temp->next=NULL;
    if(head==NULL)
    {

        head=temp;

    }
    else
    {

        while(lst->next!=NULL)
        {
            lst=lst->next;
        }
        lst->next=temp;
    }
}
void ins(int k,int q)
{
    struct node *temp=(node*)malloc(sizeof(struct node)),*fnd;
    temp->data=q;
    temp->next=NULL;
    int c=1;
    fnd=head;
    while(c<k)
    {

        fnd=fnd->next;
         c++;
    }
    temp->next=fnd->next;
    fnd->next=temp;
}
void display( )
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;

    }
    printf("\n");
}

int main()
{
    head=NULL;
    int x,n,i,k,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        insert(x);
        display();
    }
    printf("enter pos after which you want to insert and data");
    scanf("%d %d ",&k,&q);
    ins(k,q);
    display();
}
