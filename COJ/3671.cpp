#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, R, X=1;

int main() {
    scanf("%lld", &N);

    while(X<N)
        X *= 3, R++;

    printf("%lld\n",R);

    return 0;
}
