#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    return 0;
                }
            }
            printf("%d",i);

        }
    }
    return 0;
}
