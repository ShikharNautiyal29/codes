#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int i,c=0,k;
   fgets(s,20,stdin);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
           {
               c++;
           }
    }
    k=c+1;
    cout<<k;
    return 0;
}
