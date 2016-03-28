#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll F[21];
void init() {
    F[0]=1;
    F[1]=1;

    for(ll i=2;i<=20;i++) {
        F[i]=F[i-1]*i;
    }
}

ll binomio(ll a,ll b) {
    return F[a]/(F[b]*F[a-b]);
}

ll gcd(ll a,ll b) {
    if(!b) return a;
    return gcd(b,a%b);
}

ll N,P,K,k;
ll A,B,C;
int main() {
    init();

    while(true) {
        scanf("%lld",&N);

        if(!N)
            break;

        scanf("%lld %lld %lld",&P,&K,&k);

        A=B=C=0;

        for(ll i=k+1;i<=N-K;i++) {
            C=binomio(i-1,k)*binomio(N-i,K)*F[N-K-k-1];
            if(i>= N-P+1)
                A+=C;
            B+=C;
        }

        C=gcd(A,B);
        A/=C;
        B/=C;

        printf("%lld/%lld\n",A,B);
    }

    return 0;
}
