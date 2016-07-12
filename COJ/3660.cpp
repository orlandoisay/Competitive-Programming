#include <bits/stdc++.h>
using namespace std;

int N, R = 10000000, V[100005];

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&V[i]);

    sort(V, V+N);

    for(int i=0;i<N;i++)
        R = min(R, V[i] + V[N-i-1]);

    printf("%d\n",R);

    return 0;
}
