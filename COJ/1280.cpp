#include <bits/stdc++.h>
using namespace std;

int N, S[1005];

int main() {
    S[1] = 1;

    for(int i=2,d=2;i<=1000;i++,d+=2)
        S[i] = S[i-1] + d;

    while(true) {
        scanf("%d",&N);
        if(!N) break;
        printf("%d => %d\n",N,S[N]);
    }
    return 0;
}
