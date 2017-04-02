#include <bits/stdc++.h>
using namespace std;

int K, A[5][5], p, q;

int way(int i, int j) {
    if(i<0||i>4||j<0||j>4||A[i][j]) return 0;

    K++; A[i][j] = 1;

    int r;

    if(K == 25 && i == 4 && j == 4)
        r = 1;
    else
        r = way(i-1,j) + way(i+1,j) + way(i,j-1) + way(i,j+1);

    K--; A[i][j] = 0;

    return r;
}

int main() {
    scanf("%d", &K);

    for(int i=0;i<K;i++) {
        scanf("%d %d", &p, &q);
        A[p-1][q-1] = 1;
    }

    printf("%d\n", way(0,0));
}
