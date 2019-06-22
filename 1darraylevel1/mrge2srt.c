#include<stdio.h>
int main()
{
    int i,m,n,j,k,a[20],b[20],c[20];
    scanf("%d%d",&m,&n);
    k=m+n;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if (j>=n) {
    while(i<m)
    {
        c[k]=a[i];
            k++;
            i++;
    }
    }
    if (i>=m) {
    while(j<n)
    {
        c[k]=b[j];
            k++;
            j++;
    }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
