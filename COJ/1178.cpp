#include <bits/stdc++.h>
using namespace std;

int T, N, R, V[20000];

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%d", &N);
        for(int i=0;i<N;i++)
            scanf("%d", &V[i]);
        sort(V, V+N);
        R = 0;

        for(int i=N-3;i>=0;i-=3)
            R += V[i];

        printf("%d\n",R);
    }
    return 0;
}

