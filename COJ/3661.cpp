#include <bits/stdc++.h>
using namespace std;

int N;
char S[50];

int main() {
    while(scanf("%d",&N) && N) {
        scanf("%s",S);

        for(int i=0;i<strlen(S);i++) {
            int  v = isalpha(S[i]) ? S[i] - 'A' : (S[i]=='_' ? 26 : 27);
            v = (v + N) % 28;
            S[i] = (v < 26) ? 'A' + v : (v == 26 ? '_':'.');
        }
        reverse(S,S + strlen(S));
        printf("%s\n",S);
    }
    return 0;
}
