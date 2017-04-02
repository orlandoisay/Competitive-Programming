#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T, N;

int main() {
    scanf("%lld", &T);

    while(T--) {
        scanf("%lld", &N);
        printf("%lld\n",(N*N+N+2)/2);
    }

    return 0;
}
