#include <stdio.h>

int T,x=1;
float N;

int log2(int X) {
    int R=0;
    while(X >= 2.0) {
        X /= 2.0;
        R++;
    }
    return R;
}

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%f", &N);
        printf("Case #%d: %d\n",x,log2(N));
        x++;
    }

    return 0;
}
