#include <stdio.h>
#define ll long long
ll n,k,r,c,fr,fc;

int main() {
    scanf("%lld %lld %lld %lld",&n,&k,&r,&c);

    k = (k+1000)%4;

    if(k == 1) {
        fr = n + 1 - c;
        fc = r;
    }
    else if(k == 2) {
        fr = n - r + 1;
        fc = n - c + 1;
    }
    else if(k == 3) {
        fr = c;
        fc = n + 1 - r;
    }
    else {
        fr = r;
        fc = c;
    }

    printf("%lld\n",n*(fr-1)+fc);

    return 0;
}
