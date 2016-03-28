#include <bits/stdc++.h>

long long int n;

int main()
{
    while(1)
    {
        scanf("%lld",&n);

        if(n==0)
            break;

        printf("%lld\n",(n*(n+1)*((2*n)+1))/6);
    }
    return 0;
}
