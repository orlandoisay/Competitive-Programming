#include <bits/stdc++.h>
#define rep(i,N,M) for(int i=N;i<=M;i++)
using namespace std;

int n,m,k;
int A[1005][1005];

bool checa(int i,int j){
    if(A[i][j] && A[i+1][j] && A[i][j+1] && A[i+1][j+1])
        return true;
    return false;
}


int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<k;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        A[x][y]=1;
        if(checa(x-1,y-1) || checa(x-1,y) || checa(x,y-1) || checa(x,y)){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("0");
    return 0;
}