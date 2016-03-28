#include <stdio.h>

double A,B;

int main() {
    while(scanf("%lf %lf",&A,&B)!=EOF) {
        printf("%.2f\n",A/B);   
    }
    return 0;
}
