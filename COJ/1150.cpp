#include <bits/stdc++.h>
using namespace std;

long long N;


int main() {
    for(int i=0;i<1000;i++) {
        scanf("%lld",&N);
        if(N%10 == 0) printf("2\n");
        else printf("1\n%lld\n",N%10);
    }

    return 0;
}
