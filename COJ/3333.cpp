#include <stdio.h>

int N, V[100005], D[100005], Q;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&V[i]);

    D[0]=V[0];

    for(int i=1;i<N;i++)
        D[i]=V[i]+D[i-1];

    scanf("%d",&Q);

    while(Q--) {
        int A,B;
        scanf("%d %d",&A,&B);
        B--;
        A--;

        if(A)
            printf("%d\n",D[B]-D[A-1]);
        else
            printf("%d\n",D[B]);
    }

    return 0;
}
