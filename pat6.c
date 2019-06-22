#include<stdio.h>
int main()
{
    int i,j,k,c;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("   ");
        }
       c=i-1;
        for(k=1;k<=i;k++)
        {
            printf(" %d ",c);
            c--;
        }
        if(i>=2 && i<=6)
        {
            c=1;
        for(j=1;j<=i-1;j++)
        {
            printf(" %d ",c);
            c++;
        }
        }
        printf("\n");
    }

    return 0;
}




