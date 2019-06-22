#include<stdio.h>
int main()
{
    int n,a[20],b[20],c[20],i;
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
        if(a[i]%2==0 && b[i]%2==0)
        {
            c[i]=a[i]+b[i];
        }
        else if(a[i]%2!=0 && b[i]%2!=0)
        {
            c[i]=a[i]*b[i];
        }
        else
        {
             c[i]=a[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
