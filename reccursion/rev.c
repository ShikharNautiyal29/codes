#include<stdio.h>
int main()
{
    int a,n,s=0;
    scanf("%d",&n);
    a=rev(n,s);
    printf("%d",a);
    return 0;
}
int rev(int x,int y)
{
    int z;
    while(x)
    {
        z=x%10;
        y=y*10+z;
        x=x/10;
        return rev(x,y);
    }
    return y;
}
