#include <stdio.h>

int N,R,S,A[100];

int main() {
    while(scanf("%d",&N)!=EOF) {
        R = S = 0;
        for(int i=0;i<N;i++) {
            scanf("%d",&A[i]);
            S += A[i];
        }

        for(int i=0;i<N;i++)
            if((S - A[i]) % 2 == 0)
                R++;

        printf("%d\n",R);
    }

    return 0;
}
