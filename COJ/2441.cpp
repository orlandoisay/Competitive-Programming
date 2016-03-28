#include <stdio.h>

int T,A,B;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&A,&B);

        if((2*A*B - A - B)% 2 == 0)
            printf("Second\n");
        else
            printf("First\n");
    }

    return 0;
}
