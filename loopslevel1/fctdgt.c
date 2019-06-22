#include<stdio.h>
int main()
{
    int n,sum=0,k,m=1;
    scanf("%d",&n);
    while(n)
    {
        k=n%10;
        while(k)
        {
            m=m*k;
            k--;
        }
        n=n/10;
        sum=sum+m;
        m=1;
    }
    printf("%d",sum);
    return 0;
}
