#include <bits/stdc++.h>
using namespace std;

int T,N;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%.4f\n",1.0/(double)(N*N));
    }

    return 0;
}
