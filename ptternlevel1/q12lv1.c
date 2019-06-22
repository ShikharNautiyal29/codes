#include<stdio.h>
int main()
{
    int i,n,h=10,f=2,sum=0;
    scanf("%d",&n);
    for(i=1;i<=2*n;i++)
    {
        if(i%2==0)
        {
            printf("%d",h);
            sum=sum+h;
            h=h*2;
        }
        else
        {
            printf("%d",f);
            sum=sum+f;
            f=f*3;
        }
    }
    printf("%d",sum);
    return 0;
}
