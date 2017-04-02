#include <bits/stdc++.h>
using namespace std;

struct E {
    int V, P;
    E() {}
    E(int _V, int _P) { V = _V, P = _P; }
};

int N, X, R[100005];
stack <E> S;

int main() {
    scanf("%d", &N);

    for(int i=1;i<=N;i++) {
        scanf("%d", &X);

        while(true) {
            if(S.empty()) {
                S.push(E(X, i));
                break;
            }
            else {
                if(S.top().V < X) {
                    R[S.top().P] = i;
                    S.pop();
                }
                else {
                    S.push(E(X, i));
                    break;
                }
            }
        }
    }

    for(int i=1;i<=N;i++)
        printf("%d\n",R[i]);

    return 0;
}
