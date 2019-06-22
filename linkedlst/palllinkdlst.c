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

int findknode(int begin)
{
    int m;
    struct node *l=head;
    int c=1;
    while(c!=begin)
    {
        l=l->next;
        c++;
    }
    m=l->data;
    return m;
}


void pall(int n)
{
    int begin=1;
    int end=n;
    int flag=0;
    while(begin<end)
    {
        if(findknode(begin)!=findknode(end))
        {
            printf("No Pallindrome");
            flag=1;
            break;
        }
        begin++;
        end--;
    }
    if(flag!=1)
    printf("Pallindrome");
}

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
pall(n);

return 0;
}




