#include <bits/stdc++.h>
using namespace std;

struct E {
    char V; int P;
    E() {}
    E(char _V, int _P) { V = _V, P = _P; }
};

int T, N, R[100005];
char str[100005];

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%d %s", &N, str);
        stack <E> S;

        for(int i=1;i<=N;i++) {
            R[i] = -1;

            while(true) {
                if(S.empty() || S.top().V >= str[i-1]) {
                    S.push(E(str[i-1], i));
                    break;
                }
                else {
                    R[S.top().P] = i;
                    S.pop();
                }
            }
        }
        for(int i=1;i<=N;i++)
            printf("%d%s", R[i],(i<N)?" ":"\n");
    }

    return 0;
}
