#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll P, N, R, n, k;

ll F[21] = {1};

int main() {
    for(ll i=1;i<=20;i++)
        F[i] = F[i-1] * i;

    scanf("%lld",&P);

    while(P--) {
        scanf("%lld %lld %lld",&N,&n,&k);
        R = 0;

        if(k == 1)
            R = F[n-1];
        else
            for(ll i=2;i<=k; i++)
                R += (F[k-2]/(F[i-2]*F[k-i]))*F[i-1]*F[n-i];
        printf("%lld %lld\n",N, R);
    }


    return 0;
}
