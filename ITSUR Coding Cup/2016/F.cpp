#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll digits(ll X) {
    ll R = 0;
    while(X) {
        X/=10;
        R++;
    }
    return R;
}

ll pow10(ll N) {
    if(N == 0) return 1;
    if(N%2) return 10 * pow10(N-1);
    ll SE = pow10(N/2);
    return SE * SE;
}

ll nleft(ll X, ll i) {
    ll R = X % pow10(i);
    return R;
}

ll nright(ll X, ll i) {
    ll R =  X / pow10(i+1);
    if(!R) return 1;
    return R;
}

ll digitAt(ll X, ll i) {
    return (X / pow10(i))% 10;
}

ll S(ll X) {
    if(!X) return 0;

    ll R = 0;
    ll K = digits(X);

    for(ll i=0;i<K-1;i++) {
        ll Di = digitAt(X,i);
        ll derecha = nright(X,i);
        ll izquierda = nleft(X,i);
        ll p = pow10(i);

        for(ll j=1;j<=9;j++) {
            ll SBT = 0;
            SBT += derecha * p;

            if(j < Di)
                SBT += p;
            if(j == Di)
                SBT += izquierda + 1;
            R += SBT * j;
        }
    }

    for(ll j=1;j<=digitAt(X,K-1);j++) {
        ll SBT = 0;

        if(j < digitAt(X,K-1))
            SBT += pow10(K-1);
        if(j == digitAt(X,K-1)) {
            SBT += nleft(X,K-1)+1;
        }
        R += SBT * j;
    }

    return R;
}

ll A, B;

int main() {
    scanf("%lld %lld",&A,&B);

    if(!A)
        printf("%lld\n",S(B));
    else
        printf("%lld\n",S(B)-S(A-1));

    return 0;
}
