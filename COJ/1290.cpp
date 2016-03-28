#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, vals[1000000];

ll f(ll x) {
    if(x <= 0)
        return 0;
    if(x == 1)
        return 1;
    if(x < 1000000) {
        if(vals[x] != -1)
            return vals[x];
        return vals[x] = max(x, f(x/2)+f(x/3)+f(x/4));
    }
    return max(x, f(x/2)+f(x/3)+f(x/4));

}



int main() {
    memset(vals,-1,sizeof(vals));
    for(int i=0;i<10;i++) {
        scanf("%lld",&n);
        printf("%lld\n",f(n));
    }

    return 0;
}
