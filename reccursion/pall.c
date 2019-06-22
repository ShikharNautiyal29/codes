#include<stdio.h>
int main()
{
    int n,c,p=0;
    scanf("%d",&n);
    c=pall(n,p);
    if(c==n)
    {
        printf("pall");
    }
    else
    {
        printf("no pall");
    }
    return 0;
}
int pall(int x,int r)
{
    int k;
    if(x>0)
    {
        k=x%10;
        r=r*10+k;
        x=x/10;
        pall(x,r);
    }
    else
    {
        return r;
    }
}
