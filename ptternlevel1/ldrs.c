#include<stdio.h>
int main()
{
    int i,j,n,max,a[20],r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        r==0;
        max=a[i];
        for(j=i+1;j<=n;j++)
        {
            if(max<a[j])
            {
                r++;
                break;
            }
            else
            {
                continue;
            }
        }
        if(r==0)
        printf("%d",max);
    }
return 0;
}


