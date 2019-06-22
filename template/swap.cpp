#include<bits/stdc++.h>
using namespace std;


template<class T>
T swaps(T &c,T &d)
    {
        T temp;
        temp=c;
        c=d;
        d=temp;
        cout<<"a is"<<c<<"b is"<<d;
    }



int main()
    {
        int a ,b;
        cout<<"enter a and b";
        cin>>a>>b;
        swaps(a,b);
        return 0;
    }
