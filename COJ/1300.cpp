#include <stdio.h>

int n,r;
bool u[50];

int main()
{
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n);
        u[n%42]=true;
    }

    for(int i=0;i<42;i++)
        if(u[i])r++;

    printf("%d\n",r);

    return 0;
}
