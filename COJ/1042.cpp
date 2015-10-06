#include <stdio.h>

int T,IT;
double H,D,R,RT;

int main() {
    scanf("%d",&T);
    IT = T;

    while(IT--) {
        scanf("%lf %lf",&H,&D);

        R=-(D*D-H*H)/(2*H);
        printf("%.1f\n",R);

        RT+=R;
    }

    printf("%.1f\n",RT/T);

    return 0;
}
