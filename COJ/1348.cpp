#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool white(ll x, ll y, ll S) {
    if(x%S == 0 || y%S == 0) return false;

    return ((x/S+y/S) % 2);
}
int main() {
    ll S, x, y, dx, dy;

    while(true) {
        scanf("%lld %lld %lld %lld %lld",&S,&x,&y,&dx,&dy);
        if(!S && !x && !y && !dx && !dy) break;

        ll can = -1;

        for(ll k=0;k<1010;k++) {
            if(white(x,y,S)) {
                can = k;
                break;
            }
            x += dx, y += dy;
        }

        if(can != -1) printf("After %lld jumps the flea lands at (%lld, %lld).\n",can,x,y);
        else printf("The flea cannot escape from black squares.\n");

    }
    return 0;
}
