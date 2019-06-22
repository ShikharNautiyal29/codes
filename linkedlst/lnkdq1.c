#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node * next;
}node;
struct node * head,* head1,* head2;
int main()
{
    head=NULL;
    head1=NULL;
    head2=NULL;
    int i,x,n,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        insert(x);
        display();
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&y);
        insert1(y);
        display1();
    }
    newld();
    disp();
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



void insert1(int y)
{
     struct node *temp1=(node*)malloc(sizeof(struct node)),*last_node1;
     last_node1=head1;
        temp1->data=y;
        temp1->next=NULL;
    if(head1==NULL)
    {
        head1=temp1;
    }
    else
    {
        while(last_node1->next!=NULL)
        {
            last_node1=last_node1->next;
        }
        last_node1->next=temp1;
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



void display1( )
{
    struct node *temp1=head1;
    while(temp1!=NULL)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;

    }
    printf("\n");
}



void newld()
{
    int g;
   struct node *temp=head;
   struct node *temp1=head1;
   while(temp!=NULL)
   {
       if(temp->data > temp1->data)
   {
       g=temp->data;
       insert2(g);
       temp=temp->next;
       temp1=temp1->next;
   }
   else
   {
       g=temp1->data;
       insert2(g);
       temp1=temp1->next;
       temp=temp->next;
   }
   }

}


void insert2(int g )
{
     struct node *temp2=(node*)malloc(sizeof(struct node)),*last_node2;
     last_node2=head2;
        temp2->data=g;
        temp2->next=NULL;
    if(head2==NULL)
    {
        head2=temp2;
    }
    else
    {
        while(last_node2->next!=NULL)
        {
            last_node2=last_node2->next;
        }
        last_node2->next=temp2;
    }
}




void disp()
{
    struct node *temp2=head2;
    while(temp2!=NULL)
    {
        printf("%d",temp2->data);
        temp2=temp2->next;

    }
    printf("\n");
}
