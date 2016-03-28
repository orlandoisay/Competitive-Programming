#include <stdio.h>
#define PI 3.14159265359

int t;
double n;

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%lf",&n);

        printf("%.2f\n",(n*n)-((n/2)*(n/2)*PI));
    }
    return 0;
}
