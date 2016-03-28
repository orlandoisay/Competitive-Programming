#include <stdio.h>
#define ll long long
#define mod 1000000000

ll N, A[1005], DP[3][1005];

int main() {
    scanf("%lld",&N);

    for(int i=0;i<N;i++)
        scanf("%lld",&A[i]);

    for(int i=1;i<=N;i++) {
        if(A[i-1]%3 == 0) {
            DP[0][i] = (2 * DP[0][i-1] + 1) % mod;
            DP[1][i] = (2 * DP[1][i-1]) % mod;;
            DP[2][i] = (2 * DP[2][i-1]) % mod;;
        }
        if(A[i-1]%3 == 1) {
            DP[0][i] = (DP[0][i-1] + DP[2][i-1]) % mod;;
            DP[1][i] = (DP[1][i-1] + DP[0][i-1] + 1) % mod;;
            DP[2][i] = (DP[2][i-1] + DP[1][i-1]) % mod;;
        }
        if(A[i-1]%3 == 2) {
            DP[0][i] = (DP[0][i-1] + DP[1][i-1]) % mod;;
            DP[1][i] = (DP[1][i-1] + DP[2][i-1]) % mod;;
            DP[2][i] = (DP[2][i-1] + DP[0][i-1] + 1) % mod;;
        }
    }

    printf("%lld\n", DP[0][N]);
    return 0;
}
