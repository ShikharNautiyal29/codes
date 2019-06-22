#include<bits/stdc++.h>
using namespace std;
stack <int> T;
stack <int> S;


void x(int a)
{
  if(T.empty())
  {
      T.push(a);
  }
  else
  {
      if(a<T.top())
      {
          T.push(a);
      }
  }

}



int main()
{
    int a=50,b=40,c=35,d=55,e=37,f=20;

    S.push(a);
    x(S.top());
    S.push(b);
    x(S.top());
    S.push(c);
    x(S.top());
    S.push(d);
    x(S.top());
    S.push(e);
    x(S.top());
    S.push(f);
    x(S.top());
cout<<T.top();
}

