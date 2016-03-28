#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll diagonals(ll x) {
    return (x*(x-3))/2;
}

ll root(ll x) {
    return (ll)ceil((3+sqrt(9+8*x))/2);
}

ll t,n;

int main() {
    while(true) {
        ++t;
        scanf("%lld",&n);
        if(!n)
            break;
        printf("Case %lld: %lld\n",t,root(n));
    }
    return 0;
}
