#include <bits/stdc++.h>
using namespace  std;

int N, MX, V[1000005];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&V[i]);
        MX = MX < V[i] ? V[i] : MX;
    }

    for(int i=0;i<N;i++)
        printf("%d\n",MX-V[i]);
    return 0;
}
