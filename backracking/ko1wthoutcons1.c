#include<stdio.h>

void back(int n,int a[],int i)
{
    if(i==n)
    {
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);

        }
        printf("\n");
     return;
    }

    a[i]=0;
    back(n,a,i+1);
    if(a[i-1]!=1){
    a[i]=1;
    back(n,a,i+1);
    }
}


int main()
{
    int n,i,a[20];
    scanf("%d",&n);
    back(n,a,0);
    return 0;
}
