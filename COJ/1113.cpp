#include <bits/stdc++.h>
using namespace std;

int N,F[32],G[32];

int main() {
    F[0] = G[1] = 1;
    F[1] = G[0] = 0;

    for(int i=2;i<=30;i++) {
        F[i] = F[i-2] + 2 * G[i-1];
        G[i] = F[i-1] + G[i-2];
    }

    while(true) {
        scanf("%d",&N);
        if(N==-1) break;
        printf("%d\n",F[N]);
    }


    return 0;
}
