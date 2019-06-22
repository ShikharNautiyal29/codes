#include<stdio.h>
int main()
{
    char s[20];
    int i,n,j,k,c;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                printf("%c",s[k]);
            }
            printf("\n");
    }
    }
    return 0;
}
