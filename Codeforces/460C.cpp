#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll N,M,MX,W;
ll I,J,MED;
ll A[100000];
ll MEN[200001];
ll EQU[200001];

bool checa(ll HEIGHT){
    memset(MEN,0,sizeof(MEN));
    memset(EQU,0,sizeof(EQU));
    ll T=0;
    for(ll i=0;i<N;i++){
        ll PL=A[i]+EQU[i];
        ll SUM=0;
        if(PL<HEIGHT){
            SUM=HEIGHT-PL;
        }
        T+=SUM;
        MEN[i+W]=SUM;
        EQU[i+1]=EQU[i]+SUM-MEN[i+1];
    }
    if(T<=M){
        return true;
    }
    return false;
}

int main(){
    scanf("%I64d %I64d %I64d",&N,&M,&W);
    for(int i=0;i<N;i++){
        scanf("%I64d",&A[i]);
    }
    I=1;
    J=2000000000;

    while(I<=J){
        MED=(I+J)/2;

        if(checa(MED)){
            I=MED+1;
            MX=MED;
        } else {
            J=MED-1;
        }
    }
    printf("%I64d",MX);
    return 0;
}