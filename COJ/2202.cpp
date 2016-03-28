#include <stdio.h>
#define ll long long

ll gcd(ll a,ll b) {
    if(!b) return a;
    return gcd(b, a%b);
}

ll a1,a2,a3,b1,b2,b3;

int main() {
    while(scanf("%lld %lld %lld %lld %lld %lld",&a1,&a2,&a3,&b1,&b2,&b3)!=EOF) {
        b1-=a1;
        b2-=a2;
        b3-=a3;
        printf("%lld\n",1 + gcd(b1,gcd(b2,b3)));
    }
    return 0;
}
