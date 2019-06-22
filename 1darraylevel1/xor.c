#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=1;i<=n;i++)
    {
        if(a[i]==b[i])
        {
            c[i]=0;
        }
        else
        {
            c[i]=1;

    }
     }
       for(i=1;i<=n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
