#include <bits/stdc++.h>

int t;
int a,b,c,d;

int main()
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        printf("%d\n",abs(a-c)+abs(b-d));
    }
    return 0;
}
