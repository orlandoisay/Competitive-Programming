#include <stdio.h>
#include <algorithm>

int K,T,P,A[15];
int NP,NT;

int main() {
    scanf("%d",&K);

    while(K--) {
        scanf("%d %d",&T,&P);
        NP=0;
        NT=0;

        for(int i=0;i<P;i++)
            scanf("%d",&A[i]);

        std::sort(A,A+P);

        A[0]+=5;
        for(int i=1;i<P;i++)
            A[i]+=A[i-1];

        for(int i=0;i<P;i++) {
            if(A[i]<=T) {
                NP++;
                NT+=A[i];
            }
            else
                break;
        }

        printf("%d %d\n",NP,NT);
    }

    return 0;
}
