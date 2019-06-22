#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=fibb(n);
    printf("%d",a);
    return 0;
}
int fibb(int b)
{
    if(b==1)
    {
        return 0;
    }
    if(b==2)
    {
        return 1;
    }
    else
    {
         return fibb(b-1)+fibb(b-2);
    }
}
