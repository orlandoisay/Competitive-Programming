#include <bits/stdc++.h>
using namespace std;

int N, K, R;

int cB(int X) {
    int R = 0;
    for(int i=0;i<16;i++)
        if(X & (1<<i)) R++;
    return R;
}

int main() {
    while(scanf("%d %d",&N,&K) != EOF) {
        R = 0 ;

        int S = 1 << N;

        for(int i=0;i<(1<<S);i++) {
            int X = 0;

            for(int b=0;b<S;b++) {
                if(i & (1<<b)) {
                    X ^= b;
                }
            }

            if(cB(X) == K) R++;
        }

        printf("%d\n", R);
    }

    return 0;
}
