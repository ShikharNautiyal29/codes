#include<stdio.h>
int main()
{
    int n,i,j,a[20][20];
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
        for(i=0;i<n;i++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
