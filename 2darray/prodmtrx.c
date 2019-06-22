#include<stdio.h>
int main()
{
    int n,i,j,a[20][20],b[20][20],c[20][20];
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
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[j][i]*b[i][i]+a[j][i+1]*b[i+1][i]+a[j][i+2]*b[i+2][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
