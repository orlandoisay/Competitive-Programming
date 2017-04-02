#include <bits/stdc++.h>
using namespace std;

int T;
double N;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%lf", &N);
        printf("%.6f\n",floor((N+1)/2)/(N+1));
    }
    return 0;
}
