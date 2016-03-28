#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T, N, L;
char S[120];

int main() {
    scanf("%lld",&T);

    while(T--) {
        scanf("%lld %s",&N,S);
        L = strlen(S);
        N %= L;
        for(ll i=0;i<L;i++) {
            printf("%c",S[(L+i-N)%L]);
        }
        printf("\n");
    }
    return 0;
}
