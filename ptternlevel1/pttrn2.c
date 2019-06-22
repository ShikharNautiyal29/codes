#include<stdio.h>
int main()
{
    int i,j,c=0,l=1,k=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(c%2==0)
            printf("%d",k);
            else
            printf("%d",l);
            c++;
        }
        printf("\n");
    }
    return 0;
}
