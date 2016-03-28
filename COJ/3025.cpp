#include <stdio.h>

int N,SUM=0,A;

int main(){
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&A);
        printf("%d",(A*i)-SUM,SUM);
        SUM=A*i;
        if(i<N)
            printf(" ");
    }
    return 0;
}
