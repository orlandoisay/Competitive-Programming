#include <bits/stdc++.h>
using namespace std;

int T, N, R, W, L[100001];

int main() {
    scanf("%d", &T);

    while(T--) {
        R = 0;
        scanf("%d %d", &N, &W);

        for(int i=0;i<N;i++)
            scanf("%d", &L[i]);

        sort(L, L+N);

        while(R < N && W >= L[R])
            W -= L[R++];

        printf("%d\n", R);
    }

    return 0;
}
