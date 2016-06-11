#include <bits/stdc++.h>
using namespace std;

int n, x, y, dp[12][12];
char m[12][12];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%s",m[i]);

    scanf("%d %d",&x,&y);

    dp[0][0] = 0;

    for(int i=1;i<n;i++) {
        dp[i][0] = dp[i-1][0] + max(m[i][0] - m[i-1][0],0);
        dp[0][i] = dp[0][i-1] + max(m[0][i] - m[0][i-1],0);
    }

    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            int up = dp[i-1][j] + max(m[i][j] - m[i-1][j],0);
            int left = dp[i][j-1] + max(m[i][j] - m[i][j-1],0);
            dp[i][j] = min(up,left);
        }
    }

    printf("%d\n",dp[x-1][y-1]);



    return 0;
}
