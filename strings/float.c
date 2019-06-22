#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int i,n,j,flag=0;
    cin>>s;
    n=strlen(s);
    for(i=0;i<=n;i++)
    {
        if(s[i]=='.')
        {
            for(j=i+1;i<=n;i++)
            {
                if(s[j]=='.')
                {
                    cout<<"invalid";
                    flag=1;
                    break;
                }
                else
                {
                    cout<<"valid";
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    return 0;
}

