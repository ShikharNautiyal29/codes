#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,l;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        k=pow(i,2);
        l=pow(i+1,2);
        if(k<=n && l>n)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
