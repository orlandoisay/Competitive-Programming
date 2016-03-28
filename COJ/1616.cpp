#include <stdio.h>

double A,B;

int main() {
    while(scanf("%lf:%lf",&A,&B)!=EOF) {
        if(A>=12.0)
            A-=12.0;
        printf("%.1f %.1f\n",(A*60+B)/2,6*B);
    }
    return 0;
}
