#include<stdio.h>
int main()
{
    int a,b,c=1,l;
    scanf("%d%d",&a,&b);
    l=powe(a,b,c);
    printf("%d",l);
    return 0;
}
int powe(int x,int y,int z)
{
    if(y>0)
    {
        z=z*x;
        y--;
        return powe(x,y,z);
    }
    else
    {
        return z;
    }
}
