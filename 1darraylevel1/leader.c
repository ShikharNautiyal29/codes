#include<stdio.h>
int main()
{
    int n,a[20],i,j,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=1;i<=n;i++)
    {
        c=0;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                break;
            }
            else
            {
                c++;
            }
        }
        if(c+i==5)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
