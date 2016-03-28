#include <bits/stdc++.h>
#define ll long long

ll n,p,x=1;

bool solve(ll a, ll b) {
    while(a) {
        if(a%b > 1)
            return false;
        a/=b;
    }
    return true;
}

int main() {
    while(true) {
        scanf("%lld %lld",&n,&p);
        if(!n && !p)
            break;

        if(solve(n,p))
            printf("Case #%lld: yes\n",x);
        else
            printf("Case #%lld: no\n",x);

        x++;
    }
    return 0;
}
