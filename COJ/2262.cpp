#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, K, V[1005];

int main() {
    scanf("%lld %lld",&N,&K);

    for(int i=0;i<N;i++)
        scanf("%lld",&V[i]);

    sort(V,V+N);

    ll i=N-1;

    while(i>=0 && K > 0)
        K -= V[i--];

    if(K>0)
        printf("IMPOSSIBLE\n");
    else
        printf("%lld\n",N-1-i);

    return 0;
}
