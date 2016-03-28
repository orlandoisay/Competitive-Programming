#include <stdio.h>

int N,A;

int sum(int X) {
    int S=0;
    while(X) {
        S+=X%10;
        X/=10;
    }
    return S;
}

int solve(int X) {
    int Y = (X/10) * 100;
    for(int i = Y; i < Y + 200; i++) {

        int res = (i - sum(i));
        if(res / 10 == X && res % 10) {
            return res%10;
        }
    }
    return -1;
}

int main() {
    scanf("%d",&N);

    while(N--) {
        scanf("%d",&A);
        printf("%d\n",solve(A));
    }
    return 0;
}
