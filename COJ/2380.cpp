#include <stdio.h>

int countBits(int x) {
    int c=0;
    while(x) {
        x&=(x-1);
        c++;
    }
    return c;
}

int N,R,A;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%d",&A);
        R+=countBits(A);
    }

    printf("%d\n",R);
    return 0;
}
