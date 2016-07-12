#include <bits/stdc++.h>
using namespace std;

int N, K, R, V[1005];

int main() {
    scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++)
        scanf("%d",&V[i]);

    for(int i=0;i<N;i++) {
        int NR = 0;

        for(int j=0;j<N;j++)
            if(V[j] >= V[i] && V[j] <= V[i] + K) NR++;

        R = max(NR, R);
    }

    printf("%d\n",R);

    return 0;
}
