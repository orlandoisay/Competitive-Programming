#include <stdio.h>

int main()
{
    int n, m;
    int wire[101];
    int x, y;
    int izq, der;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&wire[i]);
    }

    scanf("%d",&m);

    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        izq=y-1;
        der=wire[x]-(izq+1);
        if(x-1>0)
        {
            wire[x-1]+=izq;
        }
        if(x+1<=n)
        {
            wire[x+1]+=der;
        }
        wire[x]=0;
    }

    for(int i=1;i<=n;i++)
    {
       printf("%d\n",wire[i]);
    }


    return 0;
}