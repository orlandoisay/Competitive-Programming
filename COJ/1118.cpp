#include <bits/stdc++.h>

int t,n,r;
bool a[101];

int main()
{
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        memset(a,0,sizeof(a));

        for(int i=2;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
                if(a[j])
                    a[j]=false;
                else
                    a[j]=true;
        }


        r=0;

        for(int i=1;i<=n;i++)
        {
            if(!a[i])
                r++;
        }

        printf("%d\n",r);
    }

    return 0;
}
