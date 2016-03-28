#include <stdio.h>
#define ll long long
#define mod 1000000007

ll n;
ll sol[1000005];

int main() {
    sol[0]=0;

    for(int i=1;i<=1000003;i++)
        sol[i] = (2*sol[i-1]+1) % mod;

    while(true) {
        scanf("%lld",&n);
        if(!n)
            break;
        printf("%lld\n",sol[n+1]);
    }


    return 0;
}
