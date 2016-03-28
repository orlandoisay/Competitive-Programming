#include <bits/stdc++.h>

int t,n,r,c;

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        c=0,r=5;

        while(r<=n)
        {
            c+=n/r;
            r*=5;
        }

        printf("%d\n",c);
    }

    return 0;
}
