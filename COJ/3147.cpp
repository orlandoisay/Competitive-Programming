#include <bits/stdc++.h>

bool R;
int T,N,A[51],DP[51];

int main() {
    scanf("%d",&T);

    while(T--) {
        R=false;
        scanf("%d",&N);

        for(int i=1;i<=N;i++)
            scanf("%d",&A[i]);

        DP[1]=A[1];
        for(int i=2;i<=N;i++)
            DP[i]=DP[i-1]+A[i];

        for(int i=1;i<=N;i++) {
            for(int j=i;j<=N;j++) {
                if(DP[j]-DP[i-1]==0) {
                    R=true;
                    break;
                }
            }
        }

        if(R)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
