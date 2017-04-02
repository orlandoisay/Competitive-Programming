#include <bits/stdc++.h>
using namespace std;

int T;
double D, A, B, F;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%lf %lf %lf %lf", &D, &A, &B, &F);
        printf("%.2f\n", (D*F)/(A+B));
    }

    return 0;
}
