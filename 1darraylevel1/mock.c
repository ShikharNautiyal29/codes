#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],charac,sb[100],temp,*p1, *p2, *p3;
    int n,k,i,j,m,len,p=0,q,w,flag=0;
    scanf("%s", str);
    len=strlen(str);
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%c",&charac);
        scanf("%d",&m);
        if(charac=='L')
        {
            for(j=1;j<=m;j++)
            {
                temp=str[0];
                for(k=0;k<len;k++)
                {
                    while(str[k]!='\0')
                    {
                        str[k]=str[k+1];
                    }
                }
                str[len-1]=temp;
            }
            sb[p]=str[0];
            p++;
        }
        else if(charac=='R')
        {
            for(j=1;j<=m;j++)
            {
                temp=str[len-1];
                for(k=len-2;k>=0;k--)
                {


                        str[k+1]=str[k];

                }
                str[0]=temp;
            }
            sb[p]=str[0];
            p++;
        }
    }

    p1 = str;
  p2 = sb;

  for(q = 0; q<strlen(str); q++)
  {
    if(*p1 == *p2)
      {
          p3 = p1;
          for(w = 0;w<strlen(sb);w++)
          {
            if(*p3 == *p2)
            {
              p3++;p2++;
            }
            else
              break;
          }
          p2 = sb;
          if(w == strlen(sb))
          {
             flag = 1;
            printf("YES");
          }
      }
    p1++;
  }
  if(flag==0)
  {
       printf("NO");
  }
    return 0;
}
