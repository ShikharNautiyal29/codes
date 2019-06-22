#include<stdio.h>
int main()
{
    int n,z;
    scanf("%d",&n);
    z=fact(n);
    printf("%d",z);
    return 0;
}
int fact( int n)
{
    if(n>=1)
    {
       return n*fact(n-1);
    }
    else
        return 1;
}
