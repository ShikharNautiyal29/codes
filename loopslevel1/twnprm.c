#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,k,l,i,max,f=1,g=1,z;
    scanf("%d",&n);
    k=n%10;
    n=n/10;
    l=n%10;
    z=k-l;
   // max=k>l?k:l;
    //if(abs(z)==2)
    //{
    for(i=2;i<sqrt(k);i++)
    {
     if(k%i==0)
     {
         f=0;
         break;
     }
    }
    for(i=2;i<sqrt(l);i++)
    {
     if(l%i==0)
     {
         g=0;
         break;
     }
    }

    //}
    if(f==1 && g==1 && abs(z)==2)
    {
        printf("twin prime");
    }
    else
    {
        printf("no twin prime");
    }
    return 0;
}
