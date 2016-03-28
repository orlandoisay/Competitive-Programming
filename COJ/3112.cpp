#include <stdio.h>
#include <algorithm>

using namespace std;

typedef struct{
    int P,V;
}Vaca;

bool CV(Vaca A,Vaca B){
    return A.P<B.P;
}

int N,C;
Vaca L[100000];
bool U[100000];

int main(){
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d %d",&L[i].P,&L[i].V);
    }

    sort(L,L+N,CV);

    for(int i=N-1;i>=0;i--){
        if(!U[i]){
            C++;
            U[i]=true;
            int j=i-1;
            int v=L[i].V;
            while(j>=0 && L[j].V>v){
                U[j]=true;
                j--;
            }
        }
    }

    printf("%d\n",C);

    return 0;
}
