#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll a,b;
ll mnx,mxx,mny,mxy;

int main() {
    scanf("%d",&n);

    scanf("%lld %lld",&a,&b);
    mnx=mxx=a;
    mny=mxy=b;

    while(--n) {
        scanf("%lld %lld",&a,&b);
        mnx=min(mnx,a);
        mxx=max(mxx,a);
        mny=min(mny,b);
        mxy=max(mxy,b);
    }

    ll r = max(mxx-mnx,mxy-mny);
    printf("%lld\n",r*r);
    return 0;
}
