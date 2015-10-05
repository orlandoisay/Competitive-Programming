#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll t,l,k,a;
ll bn[1005][1005];
void init() {
    for(int i=0;i<=1000;i++) {
        bn[i][i]=1;
        bn[0][i]=1;
    }
    for(int i=1;i<=1000;i++) {
        for(int j=i+1;j<=1000;j++) {
            bn[i][j]=(bn[i-1][j-1]+bn[i][j-1])%mod;
        }
    }
}

ll p(ll b,ll x) {
    if(!x)
        return 1;
    if(x%2)
        return (b * p(b,x-1)) % mod;
    else
        return (p(b,x/2) * p(b,x/2)) % mod;
}

int main() {
        init();
        scanf("%lld",&t);

        while(t--) {
            scanf("%lld %lld",&l,&k);
            a = (l+1)/2;

            if(k> a) {
                printf("0\n");
                continue;
            }

            if(l%2==0) {
                ll r = bn[k][a];
                r = (r * p(10,k))%mod;
                r = (r * p(90,a-k))%mod;
                printf("%lld\n",r);
            }
            else {
                ll r = bn[k-1][a-1];
                r = (r * p(10,k))%mod;
                r = (r * p(90,a-k))%mod;
                printf("%lld\n",r);
            }

        }

    return 0;
}
