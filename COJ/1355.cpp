#include <stdio.h>
#define pi 3.141592653589793

double a;

int main() {
    while(scanf("%lf",&a)!=EOF) {
        printf("%.4f\n",(a*a)-(a*a/3)-(pi*(a*a/9)));
    }
    return 0;
}
