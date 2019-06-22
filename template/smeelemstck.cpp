#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,l,m,p,q;
    stack <int> X;
    stack <int> Y;
    stack <int> Z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        X.push(k);
    }
    for(i=1;i<=n;i++)
    {
        cin>>k;
        Y.push(k);
    }
    while(X.empty()!=true)
    {
        if(Z.empty()==true)
        {
          while(Y.empty()!=true)
          {
              if(X.top()==Y.top())
              {
                  X.pop();
                  Y.pop();
                  while(Y.empty()!=true)
                  {
                      l=Y.top();
                    Z.push(l);
                  }

              }
              else if(X.top()!=Y.top())
              {
                 m=Y.top();
                 Z.push(m);
                 Y.pop();
              }
          }
        }
        else
        {
            while(Z.empty()!=true)
          {
              if(X.top()==Z.top())
              {
                  X.pop();
                  Z.pop();
                  while(Z.empty()!=true)
                  {
                      p=Z.top();
                    Y.push(p);
                  }

              }
              else if(X.top()!=Z.top())
              {
                  q=Z.top();
                 Y.push(q);
                 Z.pop();
              }
          }
        }
    }
    if(X.empty()==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
