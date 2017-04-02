#include <bits/stdc++.h>
using namespace std;

int T;
double D;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%lf", &D);
        printf("%.2f\n",(D*D*1.14)/2.0);
    }
    return 0;
}
