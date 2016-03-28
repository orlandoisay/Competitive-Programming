#include <bits/stdc++.h>

long long int n;

int main()
{
    long long int c=1;
    while(1)
    {
        scanf("%lld",&n);

        if(n==0)
            break;

        long long int r = (n*(n+1)*(2*n+1))/6;

        printf("Case %lld:\nn = %lld, diamonds = %lld\n",c++,n,r);
    }
    return 0;
}
