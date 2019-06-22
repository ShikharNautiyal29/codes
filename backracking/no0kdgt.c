#include<stdio.h>

void back(int k,int a[],int i)
{
    if(i==k)
    {
        int sum=0;
        for(i=0;i<k;i++)
        {
            sum=(sum*10)+a[i];
        }
        if(sum%7==0)
        {
            printf("%d  ",sum);
        }
        return;
    }
    if(i!=0)
    {
        a[i]=0;
    back(k,a,i+1);
    }

    a[i]=1;
    back(k,a,i+1);
    a[i]=2;
    back(k,a,i+1);
    a[i]=3;
    back(k,a,i+1);
    a[i]=4;
    back(k,a,i+1);
    a[i]=5;
    back(k,a,i+1);
    a[i]=6;
    back(k,a,i+1);
    a[i]=7;
    back(k,a,i+1);
    a[i]=8;
    back(k,a,i+1);
    a[i]=9;
    back(k,a,i+1);

}


int main()
{
    int k,i,a[100];
    scanf("%d",&k);
    back(k,a,0);
    return 0;
}
