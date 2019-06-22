#include<stdio.h>
int main()
{
    int i,n,k,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
