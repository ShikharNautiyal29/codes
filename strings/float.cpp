#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,n,max=0;
    scanf("%s",str);
    n=strlen(str);
    max=str[0];
    printf("%d",max);
    return 0;
    // for(i=0;i<n;i++)
    // {
    //     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    //     {
    //         c++;
    //         max=a[i];
    //     }
    // }
}
