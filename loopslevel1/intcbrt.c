#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,l;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        k=pow(i,3);
        l=pow(i+1,3);
        if(k<=n && l>n)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
