#include <bits/stdc++.h>
using namespace std;

int N, R, V[1005], S[1005];

int main() {
   scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%d",&V[i]);
        S[i] = V[i];
    }

    sort(S,S+N);

    for(int i=0;i<N;i++) {
        if(V[i] != S[i]) {
            for(int j=0;j<N;j++) {
                if(i != j && V[j] == S[i] && V[i] == S[j]) {
                    swap(V[i],V[j]);
                    R++;
                    break;
                }
            }
        }
    }

    for(int i=0;i<N;i++) {
        if(V[i] != S[i] && V[i] == 1) {
            R += 2;
        }
    }

    printf("%d\n",R);

    return 0;
}
