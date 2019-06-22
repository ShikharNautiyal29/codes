#include<stdio.h>
int main()
{
    int i,n,a[20],sum=0,mean,l=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    mean=sum/n;
    for(i=1;i<=n;i++)
    {
        if(a[i]>mean)
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}
