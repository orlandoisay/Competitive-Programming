#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T, DP[3][1005];
char str[1005];

int main() {
    scanf("%lld",&T);

    while(T--) {
        scanf("%s",str);
        memset(DP,0,sizeof(DP));

        for(int i=1;i<=strlen(str);i++) {
            switch(str[i-1]) {
            case 'C':
                DP[0][i] = DP[0][i-1] + 1;
                DP[1][i] = DP[1][i-1];
                DP[2][i] = DP[2][i-1];
                break;
            case 'G':
                DP[0][i] = DP[0][i-1];
                DP[1][i] = DP[1][i-1];
                DP[2][i] = DP[2][i-1];
                break;
            case 'A':
                DP[0][i] = DP[0][i-1];
                DP[1][i] = DP[1][i-1] + DP[0][i-1];
                DP[2][i] = DP[2][i-1];
                break;
            case 'T':
                DP[0][i] = DP[0][i-1];
                DP[1][i] = DP[1][i-1];
                DP[2][i] = DP[2][i-1] + DP[1][i-1];
                break;
            }
        }

        printf("%lld\n",DP[2][strlen(str)]);
    }
    return 0;
}
