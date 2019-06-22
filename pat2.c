#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" _ ");
        }
        for(k=5-i+1;k>=1;k--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
