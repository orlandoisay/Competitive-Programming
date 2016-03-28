#include <bits/stdc++.h>
using namespace std;

int T,N,X;
set <int> S;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        bool R = false;
        S.clear();
        for(int i=0;i<N;i++) {
            scanf("%d",&X);
            int sS = S.size();
            S.insert(X);
            if(sS == S.size()) {
                R = true;
                printf("%d\n",X);
            }
        }
        if(!R)
            printf("Not found!\n");
    }
    return 0;
}
