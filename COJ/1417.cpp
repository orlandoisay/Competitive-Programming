#include <bits/stdc++.h>
using namespace std;

double N;

int main() {
    while(scanf("%lf",&N) && N != 0) {
        printf("Starting height: %.5f meter(s)\n",N);

        double diff = 1.0/1000.0;

        int x = 1;
        while(N >= diff) {
            N /= 2.0;
            printf("Bounce #%d: %.10f meters\n",x++,N);
        }
        printf("\n");

    }
    return 0;
}
