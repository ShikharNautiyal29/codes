#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> S;
    char c[20];
    int i,l;
    cin>>c;
    l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]=='{')
            {
                S.push('{');
            }
        else if(c[i]=='}')
        {
            S.pop();
        }
    }
    if(S.empty()==true)
    {
        cout<<"balanaced";
    }
    else
    {
        cout<<"unbalanced";
    }
    return 0;
}

