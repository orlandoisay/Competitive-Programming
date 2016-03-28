#include <bits/stdc++.h>
using namespace std;
#define ll long long

int T, D[]={7,2,3,5};
stack <int> r;

int main() {
    scanf("%d",&T);

    while(T--) {
        ll N;
        scanf("%lld",&N);

        while(N>0) {
            r.push(D[N%4]);
            N=(N-1)/4;
        }
        while(!r.empty()) {
            printf("%d",r.top());
            r.pop();
        }
        printf("\n");
    }

    return 0;
}
