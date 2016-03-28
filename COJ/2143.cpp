#include <bits/stdc++.h>
using namespace std;

int T,R,N,M;
int W[260],C[260];
int DP[2][1005];


int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&N,&M);

        for(int i=0;i<N;i++)
            scanf("%d %d",&W[i],&C[i]);

        memset(DP[1],0,sizeof(DP[1]));

        for(int i=0;i<N;i++) {
            memcpy(DP[0],DP[1],sizeof(DP[1]));

            for(int j=W[i];j<=M;j++)
                DP[1][j] = max(DP[0][j],DP[0][j-W[i]]+C[i]);
        }
        R+=DP[1][M];
    }

    printf("%d\n",R);

    return 0;
}
