#include <stdio.h>
#define ll long long

ll f(ll x) {
    ll res = (x % 1000) * 10;
    ll z=0;

    while(x) {
        z += x%10;
        x/=10;
    }
    res += z;

    if(res > 9999)
        res %= 10000;
    else if(res < 1000)
        res += 1000;

    if(res < 10)
        printf("000%lld\n",res);
    else if(res < 100)
        printf("00%lld\n",res);
    else if(res < 1000)
        printf("0%lld\n",res);
    else
        printf("%lld\n",res);
}

ll t,n;

int main() {
    scanf("%lld",&t);

    while(t--) {
        scanf("%lld",&n);
        f(n);
    }
    return 0;
}
