#include<bits/stdc++.h>
using namespace std;
class node
{
    int data;
    node * next;
};
 node * head;



void insert(int x)
{
     node *temp=new node(),*last_node;
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
     node *temp=head;
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
    int i,x,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x;
        insert(x);
        display();
    }

}
