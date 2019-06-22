
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i-1;j>=1;j--)
        {
            printf("   ");
        }
        for(k=1;k<=5;k++)
        {
        if(i==1 || i==5)
        {
             printf(" * ");
        }
        else
        {
            if(k==1 || k==5)
            {
                printf(" * ");
            }
            else
           printf("   ");
        }
        }
        printf("\n");
    }
    return 0;
}
