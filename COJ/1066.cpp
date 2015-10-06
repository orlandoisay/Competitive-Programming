#include <bits/stdc++.h>
#define pi 3.141592653589793
using namespace std;

int T;
double R,N,A,B;

double sen(double angle) {
    angle *= (pi/180.0);
    return sin(angle);
}

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%lf %lf",&R,&N);
        A=360.0/N;
        B=(180.0-A)/2.0;
        printf("%.4f ",N * R * sen(A) / sen(B));

        A=180.0/N;
        B=90.0-A;
        printf("%.4f\n",2 * N * R * sen(A) / sen(B));
    }
    return 0;
}
