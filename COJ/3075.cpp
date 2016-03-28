#include <stdio.h>
#define pi 3.1415926535897932384626433832795028841971693993751058

double r;

int main() {
    scanf("%lf",&r);
    printf("%.6f\n%.6f\n",pi*r*r,2.0f*r*r);
    return 0;
}
