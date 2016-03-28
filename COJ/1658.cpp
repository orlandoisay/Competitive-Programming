#include <stdio.h>

int K, N, MX, aMX, A[1000], LIS[1000];

int main() {
    scanf("%d", &K);

    while(K--) {
        scanf("%d", &N);

        for(int i = 0; i < N; i++)
            scanf("%d", &A[i]);

        MX = LIS[0] = 1;

        for(int i = 1; i < N; i++) {
            aMX = 0;

            for(int j = 0; j < i; j++)
                if(A[j] < A[i])
                    aMX = LIS[j] > aMX ? LIS[j] : aMX;
            LIS[i] = 1 + aMX;
            MX = LIS[i] > MX ? LIS[i] : MX;
        }

        printf("%d\n",MX);
    }
    return 0;
}
