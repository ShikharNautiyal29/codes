#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,m,b,max=0,t,y,q;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //for(i=1;i<=n;i++)
    //{
     //   for(j=1;j<=m;j++)
      //  {
        //   b[i][j]=0;
        //}
   // }

   // for(i=2;i<=n;i++)
    //{
      //  c=1;
        //for(j=2;j<=m;j++)
        //{
          //  c++;
            //if(i==1 && j==1)
            //{
              //  continue;
            //}
           // else
            //{
            //    if(a[i][j]==1)
             //   {

               //     b[i][j]=c;
                //}
            //}
        //}
   // }



    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
             q=0;
            if(i!=0 || j!=0)
            {
                printf("%d%d",i,j);

                    if(a[i][j]>0)
                    {

                        if(a[i-1][j-1]>0)
                        {
                            q++;
                        }
                        if(a[i-1][j]>0)
                        {
                            q++;
                        }
                        if(a[i-1][j+1]>0)
                        {
                            q++;
                        }
                        if(a[i][j-1]>0)
                        {
                            q++;
                        }
                        if(a[i][j+1]>0)
                        {
                            q++;
                        }
                        if(a[i+1][j-1]>0)
                        {
                            q++;
                        }
                        if(a[i+1][j]>0)
                        {
                            q++;
                        }
                        if(a[i+1][j+1]>0)
                        {
                            q++;
                        }
                    }
            }
              if(max<q)
              {
                  max=q;
                  t=i;
                  y=j;
              }
            }
        }

    printf("%d %d %d",t,y,max);

   //for(i=1;i<=n;i++)
    //{
      //  for(j=1;j<=m;j++)
        //{
          //  printf("%d",b[i][j]);
        //}
       //printf("\n");
    //}
    return 0;
}
