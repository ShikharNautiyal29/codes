#include<stdio.h>

void back(int k,int a[],int i)
{
    if(i==k)
    {
        for(i=0;i<k;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
        return;
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
