#include <stdio.h>

int A,B,C;

int main() {
    while(true) {
        scanf("%d %d",&A,&B);

        if(!A && !B)
            break;

        if(B<A) {
            C=B;
            B=A;
            A=C;
        }

        printf("%d\n",A-(B-A));
    }

    return 0;
}
