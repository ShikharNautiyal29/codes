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
    alt(n);
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

void alt(int n)
{
    struct node *temp1=head;
    int flag=0;
    if(n%2==0)
    {
        while((temp1->next)->next!=NULL)
        {
       (temp1->next)=(temp1->next)->next ;
       temp1=temp1->next;
        }
    //display();
    flag=1;
    }


    else if(n%2!=0 && flag!=1)
    {
        while(temp1->next!=NULL)
    {
       (temp1->next)=(temp1->next)->next ;
       temp1=temp1->next;
    }
   // display();
    }
     display();
}
