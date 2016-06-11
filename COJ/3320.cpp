#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, M;

ll upTo(ll X) {
    ll X2 = sqrt(X);
    return ((X*(X+1))/2) - ((X2*(2*X2+1)*(X2+1))/6);
}

ll solve(ll A,ll B) {
    return upTo(B) - upTo(A-1);
}

int main() {
    while(true) {
        scanf("%lld %lld",&N,&M);

        if(!N && !M)
            break;

        printf("%lld\n",solve(N,M));
    }

    return 0;
}
