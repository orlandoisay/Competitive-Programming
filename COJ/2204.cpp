#include <stdio.h>

int N,A;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%d",&A);

        for(int i=2;i<=A;i++)
            printf("%d ",i);
        printf("1\n");
    }

    return 0;
}
