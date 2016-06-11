#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct circle {
    ll x,y,r;
};

ll sqr(ll x) {
    return x*x;
}

ll dist2(circle a, circle b) {
    return sqr(a.x-b.x)+sqr(a.y-b.y);
}

ll t;
circle a,b,c;

int main() {
    scanf("%lld",&t);

    while(t--) {
        scanf("%lld %lld %lld %lld %lld %lld",&a.x,&a.y,&a.r,&b.x,&b.y,&b.r);
        if(a.r < b.r) swap(a,b);
        c.x = a.x + a.r - b.r;
        c.y = a.y;


        ll distSqr = dist2(a,b);

        if(a.x == b.x && a.y == b.y && a.r == b.r)
            printf("SAME\n");
        else if(distSqr > sqr(a.r+b.r))
            printf("EXT\n");
        else if(distSqr == sqr(a.r+b.r))
            printf("TANGENT EXT\n");
        else if(distSqr == dist2(a,c))
            printf("TANGENT INT\n");
        else if(distSqr < dist2(a,c))
            printf("INT\n");
        else
            printf("SEC\n");
    }
    return 0;
}
