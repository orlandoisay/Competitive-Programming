#include <bits/stdc++.h>
using namespace std;

int T;
double A, B;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%lf %lf", &A, &B);
        printf("%.2f\n", A/B);
    }
    return 0;
}
