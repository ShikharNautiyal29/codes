#include<stdio.h>
int main()
{
    int i,j,m=0,l;
    for(i=1;i<=4;i++)
    {
        l=m+i;
         m=l;
        for(j=1;j<=i;j++)
        {
            printf("%d",&l);
            l--;
        }

        printf("\n");
    }
    return 0;
}


