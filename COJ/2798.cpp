#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T,X,N,DP[11][65];

void dp() {
    for(ll i=0;i<=64;i++)
        DP[0][i] = 1;
    for(ll i=0;i<10;i++)
        DP[i][1] = 1;
    DP[10][1] = 10;

    for(ll i=2;i<=64;i++) {
        for(ll d=1;d<=9;d++) {
            for(ll m=0;m<=d;m++)
                DP[d][i] += DP[m][i-1];
            DP[10][i] += DP[d][i];
        }
        DP[10][i]++;
    }
}

int main() {
    dp();
    scanf("%lld",&T);

    while(T--) {
        scanf("%lld %lld", &X, &N);
        printf("%lld %lld\n", X, DP[10][N]);
    }
    return 0;
}
