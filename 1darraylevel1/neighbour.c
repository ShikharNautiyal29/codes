#include<stdio.h>
int main()
{
    int i,n,a[20];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=2;i<=n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            printf("%d",a[i]);
            break;
        }
    }
    return 0;
}
