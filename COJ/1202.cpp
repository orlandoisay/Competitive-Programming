#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll NUM,T;
ll P[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296,8589934592};

void solve(ll X) {
    if(X==0) {
        printf("0");
        return;
    }
    if(X==1) {
        printf("2(0)");
        return;
    }
    if(X==2) {
        printf("2");
        return;
    }
    if(X==3) {
        printf("2+2(0)");
        return;
    }

    ll Xc=X;
    for(int i=32;i>=0;i--) {
        if(P[i]<=Xc){
            Xc-=P[i];
            if(i!=1){
                printf("2(");
                solve(i);
                printf(")");
            }
            else {
                printf("2");
            }
            if(Xc)
                printf("+");
        }
    }


}

int main() {
    scanf("%lld",&T);
    while(T--) {
        scanf("%lld",&NUM);
        printf("%lld=",NUM);
        solve(NUM);
        printf("\n");
    }
    return 0;
}
