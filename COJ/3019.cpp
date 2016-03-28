#include <stdio.h>
#include <stdlib.h>

int T,N,A,R;

int main(){
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        R=0;
        for(int i=1;i<=N;i++){
            scanf("%d",&A);
            R+=abs(A-i);
        }
        printf("%d\n",R);
    }
}
