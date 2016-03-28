#include <stdio.h>

int T,N,M,A[105][105];

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&N,&M);

        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
                scanf("%d",&A[i][j]);

        for(int j=0;j<M;j++) {
            for(int i=0;i<N;i++) {
                printf("%d",A[i][j]);

                if(i < N -1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
