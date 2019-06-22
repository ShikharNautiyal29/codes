#include<stdio.h>
int main()
{
    int n,i,a[20],max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0 || a[i]<0)
        {
            printf("error");
            break;
        }
    }
    max=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
