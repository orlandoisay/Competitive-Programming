#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll C,N,K,T,F;

int main() {
    scanf("%lld", &C);

    while(C--) {
        scanf("%lld %lld %lld %lld",&N,&K,&T,&F);
        printf("%lld\n",F+(F-N)/(K-1));
    }

    return 0;
}
