#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20],b[20],k=0;
    int i;
    cin>>s;
    for(i=strlen(s)-1;i>=0;i--)
    {
        b[k]=s[i];
        k++;
    }
    if(strcmp(s,b)==0)
    {
        cout<<"pall";
    }
    else
    {
        cout<<"no pall";
    }
    return 0;
}
