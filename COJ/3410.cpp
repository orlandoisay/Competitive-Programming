#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, x, y, cant[2020];

int main() {
    scanf("%lld",&n);

    while(n--) {
        scanf("%lld %lld",&x,&y);
        cant[x] += y;
    }

    for(ll i=1;i<=2014;i++) {
        if(cant[i])
            printf("%lld %lld\n",i,cant[i]);
    }
    return 0;
}
