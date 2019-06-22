#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,count;
  scanf("%d",&n);
  for(i=2;i<=sqrt(n);i++)
  {
      count=0;
      while(n%i==0)
      {
          count++;
         n=n/i;
      }
      printf("%d^%d",i,count);
  }
  return 0;
}

