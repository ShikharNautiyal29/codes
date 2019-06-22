#include<stdio.h>
int main()
{
    int i,j,m=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                printf("%d",m);
            else
                printf("-%d",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}


