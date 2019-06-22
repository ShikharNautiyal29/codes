#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
           if(i+j==4)
           {
               printf("*");
           }
            if(i-j==2)
           {
               printf("*");
           }
            if(j-i==2)
           {
               printf("*");
           }
            if(i+j==8)
           {
               printf("*");
           }
        }
printf("\n");
    }
    return 0;
}
