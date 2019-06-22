#include<stdio.h>
#include<math.h>
int main()
{
   int i,sum=0,x=2,n,l=1,term=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i!=1)
       {
         term=(term*x*x*(-1))/(2*i-1)(2*i-2);
         sum=sum+term;
       }
       else
       {
           term=x;
           sum=term;
       }

   }
   printf("%d",sum);
   return 0;
}
