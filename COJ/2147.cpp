#include <bits/stdc++.h>
using namespace std;

int T, K, L;
char S[105];

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%s %d",S,&K);

        L = strlen(S);
        K %= L;

        for(int i=(L-K);i<L;i++) printf("%c", S[i]);
        for(int i=0;i<(L-K);i++) printf("%c", S[i]);
        printf("\n");
    }

    return 0;
}
