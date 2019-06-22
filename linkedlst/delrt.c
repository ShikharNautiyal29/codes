#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * next;
}node;
struct node * head;


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




void del(node *h1)
{
   //struct node ;
    //while(temp!=NULL)
    //{
      //  if((temp->data)<(temp->next)->data)
        //{
          //  temp->next=(temp->next)->next;
            //break;
        //}
    //}

    h1->next=(h1->next)->next;

}





int main()
{
    head=NULL;
    struct node *h1,*h2;
    int i,x,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        insert(x);
        display();
    }
    h1=head;
    while(h1->next!=NULL)
    {
        h2=h1->next;
        if((h2->data) > (h1->data))
        {
            del(h1);
            h1=h1->next;
        }
        else
        {
            h1=h1->next;
        }
    }
    //if(h1==h2)
display();
return 0;
}
