#include <bits/stdc++.h>
using namespace std;

char a[510],b[510];
int dp[510][510];

int mn(int x,int y, int z) {
    return min(x,min(y,z));
}

int main() {
    scanf("%s %s",a,b);

    dp[0][0]=0;

    for(int i=1;i<=strlen(a);i++)
        dp[i][0]=i;
    for(int i=1;i<=strlen(b);i++)
        dp[0][i]=i;

    for(int i=1;i<=strlen(a);i++) {
        for(int j=1;j<=strlen(b);j++) {
            dp[i][j] += mn(dp[i][j-1]+1,dp[i-1][j]+1,dp[i-1][j-1] + (a[i-1]!=b[j-1]));
        }
    }
//    for(int i=0;i<=strlen(a);i++) {
//        for(int j=0;j<=strlen(b);j++) {
//            printf("%d ",dp[i][j]);
//        }
//        printf("\n");
//    }

    printf("%d\n",dp[strlen(a)][strlen(b)]);

    return 0;
}
