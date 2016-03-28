#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a,b;
ll sum(ll x) {
    if(x%2)
        return x*((x+1)/2);
    return (x/2)*(x+1);
}

int main() {
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",sum(a+b-1) - sum(abs(a-b)));
    return 0;
}
