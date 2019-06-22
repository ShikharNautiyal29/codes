#include<stdio.h>
int main()
{
    int n,i,j,a[20][20],max=0,c;
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
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1 && a[i][j-1]==1)
            {
                c++;
            }
           // if(a[i][0]==1)
            //{
              //  c++;
            //}
            else
            {
                c=1;
            }
if(max<c)
        max=c;
        }

    }
    printf("%d",max);
    return 0;
}
