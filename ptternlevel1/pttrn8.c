#include<stdio.h>
int main()
{
    int i,j,k,s,l,m;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
           if(i+j<=4)
           {
               printf(" ");
           }
        }
        s=4;
        l=s-(i-1);
        m=s+(i-1);
        for(k=l;k<=m;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
