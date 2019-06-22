#include<stdio.h>
int main()
{
    int i,n,a[20],l=0,j,k;
    scanf("%d",&n);
    scanf("%d%d",&j,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=j && a[i]<=k)
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}
