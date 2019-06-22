#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node * next;
};
node * head;


void insertt(int x)
{
    node *temp=new node;
    if(head==NULL)
    {
        temp->data=x;
        temp->next=NULL;
        head=temp;
    }
    else
    {
        temp->data=x;
        temp->next=head;
        head=temp;
    }
}

void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
       cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}



int main()
{
    head=NULL;
    int i,n,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        insertt(x);
        display();

    }
    return 0;
}


