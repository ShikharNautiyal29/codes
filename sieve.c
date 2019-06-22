#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n+1];
    memset(a, 1, n*sizeof(a[0]));
    a[0]=0;
    a[1]=0;
    for(i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
           for(j=2;j*j<=n;j++)
            {
                a[i*j]=0;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]==1)
        {
            printf("%d",i);
            printf("\n");
        }


    }
    return 0;
}
