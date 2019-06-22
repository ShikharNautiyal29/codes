#include<stdio.h>



void abc(int a[],int c,int i,int d[],int l)
{
    int w;
   if(i==c)
   {
       for(i=0;i<c;i++)
       {
           printf("%d ",d[i]);
       }
       printf("\n");
       return;

   }
   d[l]=a[i];
   w=i+2;
   while(w<=c){
   abc(a,c,w,d,l+1);
   w++;
   }
}



int main()
{
    int n,i,a[100],j=0,c=0,d[100],l=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            a[j]=i;
            j++;
        }
    }
    a[j]=n;
    c++;
    abc(a,c,0,d,l);
return 0;
}
