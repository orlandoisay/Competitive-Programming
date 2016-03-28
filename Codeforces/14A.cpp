#include <bits/stdc++.h>
using namespace std;

int N,M;
char A[55][55];
int mini=100,maxi,minj=100,maxj;

int main(){
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++)
        scanf("%s",A[i]);
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++){
            if(A[i][j]=='*'){
                mini=min(mini,i);
                maxi=max(maxi,i);
                minj=min(minj,j);
                maxj=max(maxj,j);
            }
        }


    for(int i=mini;i<=maxi;i++){
        for(int j=minj;j<=maxj;j++)
            printf("%c",A[i][j]);
        printf("\n");
    }
    return 0;
}