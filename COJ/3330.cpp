#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

ll M,N;
char P[11],S[100005],O[11];
ll DP[11];

int main() {
    scanf("%lld %lld",&M,&N);
    scanf("%s %s",P,S);

    DP[0]=1;
    for(int i=0;i<M;i++)
        O[i+1] = P[i];

    for(int i=0;i<N;i++) {
        for(int j=M;j>0;j--) {
            if(S[i]==O[j]) {
                DP[j] += DP[j-1];
                DP[j] %= mod;
            }
        }
    }

    printf("%lld\n",DP[M]);

    return 0;
}