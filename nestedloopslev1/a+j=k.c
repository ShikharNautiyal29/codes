#include<stdio.h>
int main()
{
    int i,j,a[20],n,k,l,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                l=a[i]+a[j];
                if(l==k)
                {
                    c++;

                    break;
                }

            }

        }
         if(c==1)
            {
                break;
            }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
