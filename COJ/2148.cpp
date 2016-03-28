#include <stdio.h>

int N;
int A,B,C;

int main() {
    scanf("%d",&N);

    for(int k=0;k<N;k++) {
        scanf("%d %d %d",&A,&B,&C);

        if(!A || B*B < 4*A*C)
            printf("NO\n");
        else
            printf("SI\n");
    }
    return 0;
}
