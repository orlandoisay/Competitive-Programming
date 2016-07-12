#include <bits/stdc++.h>
using namespace std;

int N, S[100005];
vector<int> D[100005];

int main() {
    for(int i=1;i<100000;i++) {
        int x = i+i;

        while(x <= 100000) {
            D[x].push_back(i);
            S[x] += i;
            x += i;
        }
    }

    while(true) {
        scanf("%d",&N);
        if(N == -1) break;

        if(S[N] == N) {
            printf("%d = 1",N);
            for(int i=1;i<D[N].size();i++)
                printf(" + %d",D[N][i]);
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n",N);
        }
    }
    return 0;
}
