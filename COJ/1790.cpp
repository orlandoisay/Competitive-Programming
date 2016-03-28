#include <stdio.h>

int N,R,MX,MN,A[10000];

int main() {
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        scanf("%d",&A[i]);

    MX = MN = A[0];

    for(int i=1;i<N;i++) {
        if(A[i]<MN) {
            R++;
            MN = A[i];
        }

        if(A[i]>MX) {
            R++;
            MX = A[i];
        }
    }

    printf("%d\n",R);


    return 0;
}
