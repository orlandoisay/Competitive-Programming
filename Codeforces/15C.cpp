#include <bits/stdc++.h>
#define ll long long int

ll N,X,M,R;

ll f(ll n){
    if(n%4==0)
        return n;
    if(n%4==1)
        return 1;
    if(n%4==2)
        return n+1;
    if(n%4==3)
        return 0;
}

int main(){
    scanf("%I64d",&N);
    for(int i=0;i<N;i++){
        scanf("%I64d %I64d",&X,&M);
        R^=f(X+M-1)^f(X-1);
    }
    if(R)printf("tolik");
    else printf("bolik");


    return 0;
}