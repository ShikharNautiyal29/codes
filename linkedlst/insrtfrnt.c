#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * next;
}node;
struct node *head;
void insert(int x)
    {
       struct node *temp=(node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=head;
        head=temp;
    }
int main()
{
    head=NULL;
    int n,x,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        insert(x);
        display();
    }
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
