#include<stdio.h>
int main()
{
    int n,i,k,j,f=1,g=1,l;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            k=n/i;

    for(j=2;j<sqrt(k);j++)
    {
     if(k%j==0)
     {
         f=0;
         break;
     }
    }
    for(j=2;j<sqrt(i);j++)
    {
     if(i%j==0)
     {
         g=0;
         break;
     }
    }
        }
    }
    if(f==1 && g==1)
    {
        printf("semi prime");
    }
    else
    {
        printf("no semi prime");
    }
    return 0;
}
