#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int a[20],n,i,j=1,size;
    cin >> n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
        }

    }
    size=a.size();
    for(i=1;i<=size;i++)
    {
        cout << a[i];
    }
    return 0;
}
