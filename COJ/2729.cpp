#include <stdio.h>

int n,b,a=1;

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int na,nb;
        nb=b+a;
        na=b;

        a=na;
        b=nb;
    }

    printf("%d %d\n",a,b);

    return 0;
}
