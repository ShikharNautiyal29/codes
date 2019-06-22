#include<stdio.h>
int main()
{
    int i;
    char l='A',
        m='Z';
    for(i=1;i<=10;i++)
    {

        printf("%c",l);
        printf("%c",m);
        l=l+2;
        m=m-1;
    }
    return 0;
}
