#include <bits/stdc++.h>
using namespace std;

int t;
double r,pi;

int main() {
    pi = acos(0) * 2;

    scanf("%d",&t);

    while(t--) {
        scanf("%lf",&r);
        printf("%.2f\n",(r*r*pi)-(2*r*r));
    }

    return 0;
}
