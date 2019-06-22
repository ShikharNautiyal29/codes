#include<stdio.h>
int main()
{
    int n,i,j,a[20],b[20],c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=1;i<=n;i++)
        {
            c=0;
           for(j=1;j<=n;j++)
           {
            if (b[j]==a[i])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        printf("%d ",a[i]);
        }
    return 0;
}

