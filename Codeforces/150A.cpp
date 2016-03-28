#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N;

void resuelve(ll Q) {
    if(Q==1){
        printf("1\n0");
        return;
    }

    ll Cuenta=0,Lim=sqrt(Q),p=0,q=0;

    for(ll i=2;i<=Lim && i*i!=N;i++) {
        if(Q%i==0) {
            if(Cuenta==1 && !q) {
                q=i;
            }
            if(!Cuenta) {
                p=i;
                if((Q/i)%i==0) {
                    p=q=i;
                }
            }

            while(Q%i==0){
                Cuenta++;
                Q/=i;
            }
        }

    }
    if(Lim*Lim==Q)
        Cuenta++;

    if(Cuenta==0) {
        printf("1\n0");
        return;
    }
    if(Cuenta==1){
        printf("2");
        return;
    }
    printf("1\n%I64d",p*q);
    return;
}

int main(){
    scanf("%I64d",&N);
    resuelve(N);

    return 0;
}