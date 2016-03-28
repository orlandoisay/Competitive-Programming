#include <stdio.h>
#include <string.h>
#define ll long long

ll N,DP[7500];

void init() {
    for(int i=0;i<7500;i++)
        DP[i]=1;
    ll coins[] = {5,10,25,50};

    for(ll i=0;i<4;i++) {
        for(ll j=coins[i];j<7500;j++)
            DP[j]+=DP[j-coins[i]];
    }
}

int main() {
    init();
    while(scanf("%lld",&N)!=EOF) {
        printf("%lld\n",DP[N]);
    }
    return 0;
}
