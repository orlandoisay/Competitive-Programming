#include <bits/stdc++.h>
using namespace std;

char a[505],b[505];

int dp[505][505];

int main() {
    scanf("%s %s",a,b);

    for(int i=0;i<505;i++)
        dp[i][0]=dp[0][i] = i;

    for(int i=1;i<=strlen(a);i++) {
        for(int j=1;j<=strlen(b);j++) {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]);
        }
    }

    printf("%d\n",dp[strlen(a)][strlen(b)]);
    return 0;
}
