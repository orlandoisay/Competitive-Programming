#include <stdio.h>
#define ll long long

ll T,N,M;

int main() {
    scanf("%lld %lld",&T,&M);

    while(T--) {
        scanf("%lld",&N);
        printf("%lld\n",(N*N)%M);
    }
    return 0;
}
