#include <stdio.h>

int N,P,A,R;
bool C[501];

int main(){
    scanf("%d",&N);
    scanf("%d",&P);
    for(int i=0;i<P;i++){
        scanf("%d",&A);
        C[A]=true;
    }
    for(int i=1;i<=N;i++){
        if(!C[i])
            R++;
    }
    printf("%d\n",R);
    return 0;
}
