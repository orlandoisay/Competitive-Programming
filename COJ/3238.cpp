#include <bits/stdc++.h>
using namespace std;

int T,N,X,R;

int main() {

    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);

        R=0;
        for(int i=1;i<=N;i++) {
            scanf("%d",&X);
            R = max(R,abs(X-i));
        }
        printf("%d\n",R);
    }

    return 0;
}
