#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T,X,N,Q,A,B;
ll V[100000], S[100000];

ll f(ll a,ll b) {
    if(a)
        return S[b] - S[a-1];
    return S[b];
}

int main() {
    scanf("%lld",&T);

    while(T--) {
        scanf("%lld %lld",&N,&Q);
        for(int i=0;i<N;i++)
            scanf("%lld",&V[i]);
        S[0] = V[0];
        for(int i=1;i<N;i++)
            S[i] = S[i-1] + V[i];

        if(X)
            printf("\n");
        for(int i=0;i<Q;i++) {
            scanf("%lld %lld",&A,&B);
            printf("%lld\n",f(A,B));
        }
        X++;
    }
    return 0;
}
