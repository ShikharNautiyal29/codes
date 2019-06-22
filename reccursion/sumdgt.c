#include<stdio.h>
int main()
{
    int n,s=0,m;
    scanf("%d",&n);
   m= summ(n,s);
   printf("%d",m);
    return 0;
}
int summ(int a,int b)
{
    int k;
    while(a>0)
    {
        k=a%10;
        b=b+k;
        a=a/10;
        return summ(a,b);
    }

        return b;

}
