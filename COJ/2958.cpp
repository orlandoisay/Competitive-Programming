#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007

int T,N,A;
long long int TP[3000][3000];

void PASCAL(){
    for(int i=0;i<3000;i++){
        TP[0][i]=1;
        TP[i][0]=1;
    }
    for(int i=1;i<3000;i++){
        for(int j=1;j<3000;j++){
            TP[i][j]=(TP[i-1][j]+TP[i][j-1])%MOD;
        }
    }
}

int main(){
    PASCAL();
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        A=1;
        while(N>0){
            N-=A;
            A*=2;
        }
        A/=2;
        N+=A;
        printf("%d\n",TP[N][abs(N-A)]-1);
    }
}
