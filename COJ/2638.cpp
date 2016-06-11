#include <bits/stdc++.h>
#define MOD 100999
using namespace std;

int T, N;
int WAYS[2001][2001];

int main() {
    for(int i=0;i<=2000;i++)
        for(int j=0;j<2;j++)
            WAYS[i][j]=1;

    for(int j=2;j<=2000;j++)
        for(int i=2;i<=2000;i++)
            WAYS[i][j] = (WAYS[i-1][j] + WAYS[i-1][j-i]) % MOD;

    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%d\n",WAYS[2000][N]);
    }


    return 0;
}
