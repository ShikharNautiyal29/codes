#include<stdio.h>
int main()
{
    int n,i,j,a[20][20],c,max=0,m=0;
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
        c=0;
        for(i=0;i<n;i++)
        {
            c++;
        }
        if(max<c)
        {
            max=c;
            m=j;
        }
    }
    printf("%d",m);
    return 0;
}
