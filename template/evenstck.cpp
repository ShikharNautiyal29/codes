#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,i,k,b,z;
    stack <int> S;
    stack <int> T;
     cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        S.push(k);
    }
    while(S.empty()!=true)
    {
        z=S.top();
        if(z%2==0)
        {
            S.pop();
        }
        else
        {
            T.push(z);
            S.pop();
        }
    }
   while(T.empty()!=true)
   {
       b=T.top();
       cout<<b<<endl;
       T.pop();
   }
    return 0;
}
