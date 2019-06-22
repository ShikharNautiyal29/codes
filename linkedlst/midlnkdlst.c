#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * next;
}node;
struct node * head;
int main()
{
    head=NULL;
    int i,x,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        insert(x);
        display();
    }
    mid(n);
}
void insert(int x)
{
     struct node *temp=(node*)malloc(sizeof(struct node)),*last_node;
     last_node=head;
        temp->data=x;
        temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        while(last_node->next!=NULL)
        {
            last_node=last_node->next;
        }
        last_node->next=temp;
    }
}
void display( )
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;

    }
    printf("\n");
}
void mid(int n)
{
    struct node *h1, *h2;
    h1=head;
    h2=head;
    if(n%2!=0)
        {
            while(h2->next!=NULL )
            {
                h1=h1->next;
                h2=(h2->next)->next;
            }
            printf("%d",h1->data);
        }
    if(n%2==0)
    {
        while((h2->next)->next!=NULL)
        {
             h1=h1->next;
                h2=(h2->next)->next;
        }
        printf("%d",h1->data);
    }
}

