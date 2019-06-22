#include<stdio.h>
int main()
{
    int m,n,min,i;
    scanf("%d%d",&m,&n);
   min=m<n?m:n;
    for(i=2;i<=min;i++)
    {
        if(m%i==0 && n%i==0)
        {


            break;
        }

    }
    if(i==min+1)
    {
        printf("coprime");
    }
    else
    {
        printf("not coprime");
    }
    return 0;
}
