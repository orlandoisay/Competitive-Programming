#include <stdio.h>

int n;

int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int t,v,s=0;
        scanf("%d",&t);

        for(int j=0;j<t;j++)
        {
            scanf("%d",&v);
            s+=v;
        }

        if(s%t==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
