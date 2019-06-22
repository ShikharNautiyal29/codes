#include<stdio.h>
int main()
{
    int n,b=1,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=s+b*r;
        n=n/10;
        b=b*2;
    }
    printf("%d",s);
    return 0;
}
