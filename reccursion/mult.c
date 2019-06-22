#include<stdio.h>
int main()
{
    int x,y,z=0,k;
    scanf("%d%d",&x,&y);
    k=mult(x,y,z);
    printf("%d",k);
    return 0;
}
int mult(int a, int b ,int c)
{
    if(b>0)
    {
        c=c+a;
        b--;
        return mult(a,b,c);
    }
    else
    {
        return c;
    }
}
