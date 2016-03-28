#include <stdio.h>
#define mod 1000000007
#define ll long long

ll n,f[1000001];

int main() {
    f[1]=1;
    for(ll i=2;i<=1000000;i++) {
        f[i] = (f[i-1] + (i*i)) % mod;
    }
    while(scanf("%d",&n)!=EOF)
        printf("%lld\n",f[n]);
    return 0;
}
