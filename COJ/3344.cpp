#include <bits/stdc++.h>
using namespace std;

int P, K, R, X, V[15];

int main() {
    scanf("%d",&P);

    while(P--) {
        scanf("%d", &K);
        for(int i=0;i<15;i++)
            scanf("%d", &V[i]);
        R = X = 0;

        for(int i=1;i<15;i++) {
            if(V[i] > X) R++;
            X = V[i];
        }

        printf("%d %d\n",K,R);
    }
    return 0;
}
