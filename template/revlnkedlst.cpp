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
    node *temp=new node,*lst;
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
    stack <int> S;
    head=NULL;
    int n,x,i,f;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        insertt(x);
        display();
    }
    node *h1=head;
    while(h1!=NULL)
    {
        f=h1->data;
        S.push(f);
        h1=h1->next;
    }
    while(S.empty()!=true)
    {
        f=S.top();
        cout<<f;
        S.pop();
    }
    return 0;
}
