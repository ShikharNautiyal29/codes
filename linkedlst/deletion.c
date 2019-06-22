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
    int i,n,j,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        insert(x);
        display();
    }
    printf("Enter index you want to delete");
    scanf("%d",&j);
    delete(j);
    display();
}
void insert(int x)
{
    struct node *temp=(node*)malloc(sizeof(struct node)),*lst;
    temp->data=x;
    temp->next=NULL;
    lst=head;
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
void display()
{
    struct node *temp=(node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
       printf("%d",temp->data);
       temp=temp->next;
    }
    printf("\n");
}
void delete(int j)
{
    struct node *lst;
    lst=head;
    int c=1;
    while(c<j-1)
    {
        lst=lst->next;
        c++;
    }
    lst->next=((lst->next)->next);

}
