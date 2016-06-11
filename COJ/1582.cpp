#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N,M[1005][1005],SUM[1005][1005],RES[1005][1005];

ll solve(ll R, ll C) {
    if(R == N) return 0;

    if(RES[R][C] == -1) {
        RES[R][C] = 0;

        if(C>0) RES[R][C] = max(RES[R][C],solve(R,C-1));
        RES[R][C] = max(RES[R][C], solve(R+1,min(N-2-R,C)) + SUM[R][C+1]);
    }

    return RES[R][C];
}

int main() {

    while(scanf("%lld",&N) && N) {
        for(int i=0;i<1005;i++)
            for(int j=0;j<1005;j++)
                RES[i][j] = -1;

        for(int i=0;i<N;i++)
            for(int j=0;j<=i;j++)
                scanf("%lld",&M[j][i-j]);

        for(int i=0;i<N;i++)
            for(int j=0;j < N-i;j++)
                SUM[i][j+1] = M[i][j] + SUM[i][j];

        printf("%lld\n",solve(0,N-1));
    }
    return 0;
}
