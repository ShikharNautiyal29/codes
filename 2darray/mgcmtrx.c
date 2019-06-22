#include<stdio.h>
int main()
{
    int n,i,j,a[20][20],k,sum=0,s,c=0,m=0,d=0;
    scanf("%d",&n);
    k=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>k)
            {
                c++;
                break;
            }
        }
        if(c!=0)
            {
                printf("Not magic matrix");
                break;
            }
    }
    for(j=0;j<n;j++)
    {
        sum=sum+a[0][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               m=m+a[i][j];
            }
            if(i+j==n-1)
            {
                d=d+a[i][j];
            }
        }

    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
        if(s!=sum)
        {
            break;
        }
    }
    if(s!=sum  || d!=sum || m!=sum)
        {
            printf("not magic matrix");
        }
        else
        {
            printf("magic matrix");
        }
    return 0;
}
