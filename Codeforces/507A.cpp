#include <bits/stdc++.h>

typedef struct {
    int indice, valor;
}E;

int N,T;
E A[1000];
int B[1000],Bi;
int R;

bool ord(E A, E B){
    return A.valor<B.valor;
}

int main(){
    scanf("%d %d",&N,&T);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i].valor);
        A[i].indice=i+1;
    }
    std::sort(A,A+N,ord);

    int j=0;

    while(T>0){
        if(T-A[j].valor>=0){
            T-=A[j].valor;
            R++;
            B[Bi++]=A[j].indice;
        }
        j++;
        if(j==N)break;
    }

    printf("%d\n",R);
    for(int i=0;i<Bi;i++)
        printf("%d ",B[i]);
    return 0;
}