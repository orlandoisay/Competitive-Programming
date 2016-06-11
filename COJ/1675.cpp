#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T,N,M;
char C[5];
vector <ll> SOL;

ll pow2(ll x) {
    if(x==0)
        return 1;
    return 2 * pow2(x-1);
}

int main() {
    while(true) {
        scanf("%lld",&N);
        if(N==-1)
            break;
        scanf("%lld %s",&M,&C);
        SOL.clear();
        T++;

        if(!N || !M) {
            printf("Case %lld: %lld x %lld = 0\n",T,N,M);
            continue;
        }

        printf("Case %lld: %lld x %lld = ",T,N,M);

        for(ll i = 31;i>=0;i--) {
            ll p2 = pow2(i);

            if(p2<=N) {
                SOL.push_back(p2*M);
                N-=p2;
            }
        }

        if(C[0]== 'b')
            for(int i=0;i<SOL.size();i++) {
                printf("%lld",SOL[i]);
                if(i<SOL.size()-1)
                    printf(" + ");
                else
                    printf("\n");
            }
        else
            for(int i=SOL.size()-1;i>=0;i--) {
                printf("%lld",SOL[i]);
                if(i > 0 )
                    printf(" + ");
                else
                    printf("\n");
            }


    }


    return 0;
}
