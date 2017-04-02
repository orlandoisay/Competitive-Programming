#include <bits/stdc++.h>
using namespace std;

int T, N;
double D, A, B, F;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%d %lf %lf %lf %lf", &N, &D, &A, &B, &F);
        printf("%d %.2f\n", N, (D*F)/(A+B));
    }

    return 0;
}
