#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    stack <int> S;
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
    cout<<S.size()<<endl;
    cout<<S.top()<<endl;
    while(S.empty()!=true)
    {
        c++;
        S.pop();
    }
    cout<<c;
    return 0;
}
