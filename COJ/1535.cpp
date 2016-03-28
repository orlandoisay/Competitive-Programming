#include <stdio.h>

int N, A[10];
bool m,M;

int main() {
    scanf("%d",&N);
    printf("Lumberjacks:\n");

    while(N--) {
        for(int i=0;i<10;i++)
            scanf("%d",&A[i]);

        m = M = true;

        for(int i=1;i<10;i++) {
            if(A[i]>A[i-1])
                m=false;
            if(A[i]<A[i-1])
                M=false;
        }

        if(m || M)
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }
    return 0;
}
