#include <stdio.h>
#define ll long long
#define mod 1000000007

ll T, N, DP[1000001];

int main() {
    scanf("%lld",&T);

    DP[0]=1;
    DP[1]=2;

    for(int i=2;i<=1000000;i++)
        DP[i] = (DP[i-1] + DP[i-2]) % mod;

    while(T--) {
        scanf("%lld",&N);
        printf("%lld\n",DP[N]);
    }

    return 0;
}
