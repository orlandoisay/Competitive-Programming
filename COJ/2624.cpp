#include <bits/stdc++.h>
using namespace std;

int T,N,M,R,D[100];

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&M,&N);

        for(int i=0;i<N;i++)
            scanf("%d",&D[i]);

        sort(D,D+N);

        D[N] = 1000;
        R=0;
        while(D[R] <= M) {
            M-=D[R];
            R++;
        }

        printf("%d\n",R);
    }
    return 0;
}
