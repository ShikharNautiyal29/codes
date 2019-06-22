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
    for(i=n;i>=1;i--)
    {
        if(a[i]==b[i])
        {
           c[i]=0;
        }
        else if(a[i]==1 && b[i]==0)
        {
            c[i]=1;
        }
        else if(a[i]==0 && b[i]==1)
        {

            if(a[i-1]==1)
            {
                a[i-1]=0;
                c[i]=0;
                }           }
        }
        }

    for(i=1;i<=n;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
