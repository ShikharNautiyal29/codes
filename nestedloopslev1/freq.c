#include<stdio.h>
int main()
{
    int i,n,a[20],count,j,dup[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        dup[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0)
        {
            dup[i]=count;
        }
    }
    for(i=0;i<n;i++)
    {
        if(dup[i]!=0)
        {
            printf("%d %d\n",a[i],dup[i]);
        }
    }
    return 0;
}
