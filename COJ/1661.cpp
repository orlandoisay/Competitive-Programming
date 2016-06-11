#include <bits/stdc++.h>
#define ll long long

ll fib(ll X) {
    ll a=1,b=1,c;
    for(int i=0;i<X;i++)
        c = a, a = b, b = c + b;
    return a;
}

int N;

int main() {
    while(scanf("%lld",&N) && N) {
        printf("%lld\n",fib(N));
    }

    return 0;
}
