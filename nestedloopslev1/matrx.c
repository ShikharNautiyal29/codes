#include<stdio.h>
int main()
{
 int n,x,y,a[20],b[20][20],k=1,i,j;
 scanf("%d",&n);
 scanf("%d%d",&x,&y);

     for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=1;i<=x;i++)
     {
         for(j=1;j<=y;j++)
         {
             b[i][j]=a[k];
             k++;
         }
     }
     for(i=1;i<=x;i++)
     {
         for(j=1;j<=y;j++)
         {
             printf("%d",b[i][j]);
         }
         printf("\n");
     }
     return 0;
 }
