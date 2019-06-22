#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,n,max=0,j,m=-1,k=0,l;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            l=1;

            for(j=i+1;j<n;j++)
            {
                if(s[j]>='0' && s[j]<='9')
                {
                    l++;
                }
                else
                {
                    break;
                }
            }
            if(max<l)
            {
                max=l;
                k=i;
                m=j-1;
            }
            i=j;
        }else
            i++;
    }

    //printf("%d %d\n", k, m);

    for(i=k;i<=m;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
