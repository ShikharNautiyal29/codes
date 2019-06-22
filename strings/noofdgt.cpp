#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int i,c=0;
    cin>>s;
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
