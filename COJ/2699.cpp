#include <stdio.h>

double s,r;

int main() {
    for(int i=0;i<30;i++) {
        scanf("%lf",&r);
        s+=r;
    }
    s += (s/30);
    printf("%.3f\n",s);
}
