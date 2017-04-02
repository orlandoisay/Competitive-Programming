#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000000

ll gcd(ll a, ll b) { return (!b)?a:gcd(b,a%b); }

ll p10(ll n) { return (!n)?1:10*p10(n-1); }

ll n, a, x, y; // x/y
char buffer[30];
int l;

int main() {
    while(true) {
        scanf("%s", buffer);
        l = strlen(buffer);
        if(l == 1) break;
        l -= 5;

        sscanf(buffer, "0.%lld...", &n);
        x = INF, y = INF;

        for(int i=0;i<l;i++) {
            ll xi = n - (n / p10(l-i)), yi = p10(l) - p10(i), zi = gcd(xi, yi);
            xi /= zi, yi /= zi;

            if(yi < y)
                x = xi, y = yi;
        }
        printf("%lld/%lld\n",x,y);
    }

    return 0;
}
