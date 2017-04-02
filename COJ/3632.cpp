#include <bits/stdc++.h>
using namespace std;

int N, Q, A, B, DP[10][100005];

int main() {
    while(scanf("%d", &N) != EOF) {
        for(int i=1;i<=N;i++) {
            for(int k=0;k<10;k++)
                DP[k][i] = DP[k][i-1];
            scanf("%d", &A);
            DP[A][i]++;
        }

        scanf("%d", &Q);

        while(Q--) {
            scanf("%d %d", &A, &B);

            int R = 0;
            for(int k=0;k<10;k++)
                if(DP[k][B] - DP[k][A-1] >0)
                    R++;
            printf("%d\n",R);
        }

    }
    return 0;
}
