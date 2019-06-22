#include<stdio.h>
int main()
{
    int n,i,j,a[20],temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        j=i+1;
        while(a[j]<0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
     for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
