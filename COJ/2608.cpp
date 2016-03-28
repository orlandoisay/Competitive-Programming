#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll A, B;

ll f(ll X) {
    X++;

    ll R = 0, G = 1;
    for(ll i=0;i<60;i++,G*=2) {
        R += (X/(2*G))*G;
        R += (X % (2*G)) - G > 0 ? (X % (2*G)) - G : 0;
    }

    return R;
}

int main() {
    while(scanf("%lld %lld",&A,&B)!=EOF) {
        printf("%lld\n",f(B)-f(A-1));
    }
    return 0;
}
