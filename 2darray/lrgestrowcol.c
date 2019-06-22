#include<stdio.h>
int main()
{
    int n,i,j,a[20][20],max;
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
        max=a[i][0];
        for(j=0;j<n;j++)
        {
                if(max<a[i][j])
                {
                    max=a[i][j];
                }

        }
        printf("%d ",max);
    }
    printf("\n");
     for(j=0;j<n;j++)
    {
        max=a[0][j];
        for(i=0;i<n;i++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }

        }
printf("%d ",max);
    }
    return 0;
}
