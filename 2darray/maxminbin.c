#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a[20][20],sum,k,max=0,min=0,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        k=0;
        sum=0;
        for(j=n-1;j>=0;j--)
        {
           sum=sum+pow(2,k)*a[i][j] ;
           k++;
        }
        if(max<sum)
        {
            max=sum;
            b=i;
        }
    }
        for(i=0;i<n;i++)
    {
        k=0;
        sum=0;
        for(j=n-1;j>=0;j--)
        {
           sum=sum+pow(2,k)*a[i][j] ;
           k++;
        }
        if(min>=sum)
        {
            max=sum;
            c=i;
        }
    }
    printf("%d %d",c,b);
    return 0;
}
