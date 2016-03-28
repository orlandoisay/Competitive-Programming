#include <stdio.h>

int N;
double R,A;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%lf",&A);
        R+=A;
    }

    printf("%.2f\n",R/double(N));

    return 0;
}
