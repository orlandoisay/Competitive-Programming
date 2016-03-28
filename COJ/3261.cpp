#include <bits/stdc++.h>
using namespace std;

int N,M,P,R;
int CAMBIO[100001];
bool U[100001];

int main(){
    scanf("%d %d %d",&N,&M,&P);

    for(int i=0;i<N;i++){
        int A,B;
        scanf("%d %d",&A,&B);
        if(!CAMBIO[B])
            CAMBIO[B]=A;
    }
    while(!U[P] && CAMBIO[P]){
        U[P]=true;
        P=CAMBIO[P];
        R++;
    }
    if(!U[P])
        printf("%d\n",R);
    else
        printf("-1\n");
    return 0;
}
