#include<stdio.h>
int main()
{
    int n,i,j,a[20][20],sum,max=0,k;
    scanf("%d",&n);
 for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
            k=j;
        }
    }
    printf("%d",k+1);
    return 0;
}
