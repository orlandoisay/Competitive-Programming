#include <bits/stdc++.h>
#define mod 1000007

int a,b,res,pot[1005];

int main() {
    pot[0]=1;
    for(int i=1;i<1005;i++)
        pot[i] = (2*pot[i-1]) % mod;

    while(scanf("%d %d",&a,&b) && !(a == -1 && b== -1)) {
        if(a) {
            res = (mod + (pot[b+1]-1) - (pot[a]-1))%mod;
        }
        else
            res = pot[b+1]-1;
        printf("%d\n",res);
    }
    return 0;
}
