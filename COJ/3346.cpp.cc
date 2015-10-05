#include <stdio.h>

int N,B,K,X;
int Bells[60005],DP[60005];
int main() {
    scanf("%d %d",&N,&B);

    for(int i=0;i<N;i++) {
        scanf("%d",&X);
        Bells[X]++;
    }

    for(int i=1;i<=50000;i++) {
        DP[i]=DP[i-1]+Bells[i];
    }

    scanf("%d",&K);

    while(K--) {
        scanf("%d",&X);
        printf("%d\n",N-DP[(B/X)<=50000?B/X:50000]);
    }

    return 0;
}
