#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

ll N;

ll pow3(ll X) {
    if(!X) return 1;
    if(X == 1) return 3;

    ll SQ = pow3(X/2);
    ll SQ2 = (SQ * SQ) % mod;

    if(X%2 == 0) return SQ2;
    return (3 * SQ2) % mod;
}

int main() {
    scanf("%lld",&N);

    if(N == 2) printf("1\n");
    else if(N == 3) printf("2\n");
    else {
        if(N%3==0) printf("%lld\n",pow3(N/3));
        else if(N%3==1) printf("%lld\n",(4 * pow3((N-4)/3))%mod);
        else printf("%lld\n",(2 * pow3((N-2)/3))%mod);
    }
    return 0;
}
