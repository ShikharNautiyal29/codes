#include<stdio.h>
int main()
{
    int m,n,a;
    scanf("%d%d",&m,&n);
    a=gcd(m,n);
    printf("%d",a);
    return 0;
}
int gcd(int q,int w)
{
    while(q!=w)
    {
        if(q>w){

            return gcd(q-w,w);}
        else
        {
            return gcd(q,w-q);
        }

    }
    return q;
}
