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
    int i,n,j,a[20];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
     insert(a[i]);
    }
    display();
}
    void insert(int ele)
{
    struct node *temp=(node*)malloc(sizeof(struct node)),*lst;
    temp->data=ele;
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
