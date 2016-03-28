#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll N,M,K;
ll SUM[5001];
ll DP[5001][5001];

int main(){
    scanf("%I64d %I64d %I64d",&N,&M,&K);
    for(int i=1;i<=N;i++){
        scanf("%lld",&SUM[i]);
        SUM[i]+=SUM[i-1];
    }

    for(int j=1;j<=K;j++){
        for(int i=j*M;i<=N;i++){
            DP[i][j]=max(DP[i-1][j],DP[i-M][j-1] + SUM[i] - SUM[i-M]);
        }
    }

    printf("%I64d",DP[N][K]);


    return 0;
}