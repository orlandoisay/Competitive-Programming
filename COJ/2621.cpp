#include <stdio.h>

int N,X=1,Y=0;

int main(){
    scanf("%d",&N);
    while(X<=N){
        X*=2;
        Y++;
    }
    printf("%d\n",Y);
}
