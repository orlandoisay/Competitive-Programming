#include <bits/stdc++.h>
using namespace std;

int N, F, A, B, C, COSTO_TOTAL;
int FRIENDS[100005],U[100005],COSTO[100005],PARENT[100005],COSTO_A[100005];

void expand(int NODO) {
    if(PARENT[NODO] == -1 || U[PARENT[NODO]])
        return;

    U[PARENT[NODO]] = 1;
    expand(PARENT[NODO]);
}

void calculate_max(int NODO) {
    if(PARENT[NODO]==-1)
        return;

    COSTO_A[PARENT[NODO]] = max(COSTO_A[PARENT[NODO]], COSTO[NODO] + COSTO_A[NODO]);
    calculate_max(PARENT[NODO]);
}

int main() {
    PARENT[1] = -1;

    scanf("%d %d",&N,&F);

    for(int i=0;i<N-1;i++) {
        scanf("%d %d %d",&A,&B,&C);
        PARENT[B] = A;
        COSTO[B] = C;
    }

    for(int i=0;i<F;i++) {
        scanf("%d",&FRIENDS[i]);
        expand(FRIENDS[i]);
    }

    for(int i=0;i<F;i++) {
        if(U[FRIENDS[i]] == 0)
            calculate_max(FRIENDS[i]);
        U[FRIENDS[i]] = 1;
    }

    for(int i=0;i<=N;i++) {
        if(U[i] == 1)
            COSTO_TOTAL += COSTO[i];
    }

    printf("%d\n", COSTO_TOTAL-COSTO_A[1]);
    return 0;
}
