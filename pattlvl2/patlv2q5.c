#include<stdio.h>
int main()
{
    int k=1,i,n,m=1;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 ");
    }
    else if(n==2)
    {
        printf("1 1");
    }
    else{
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1 ");
            continue;
        }
        else if(i==2 )
        {
            printf("1 ");
            continue;
        }
        else if(i%2!=0)
        {
            k=k*2;
            printf("%d ",k);
        }
        else
        {
            m=m*3;
            printf("%d ",m);
        }
    }
    }
    return 0;
}
