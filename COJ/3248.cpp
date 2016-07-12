#include <bits/stdc++.h>
using namespace std;

int N, M, S, L, R, J, X;

int main() {
    scanf("%d %d", &N, &M);
    L = 1, R = M;
    scanf("%d", &J);

    while(J--) {
        scanf("%d", &X);

        if(X < L) {
            int D = L - X;
            S += D, L -= D, R -= D;
        }
        if(X > R) {
            int D = X - R;
            S += D, L += D, R += D;
        }
    }
    printf("%d\n",S);


    return 0;
}
