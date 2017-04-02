#include <bits/stdc++.h>
using namespace std;

int T, S, A[6], X;

bool solve() {
    for(int i=0;i<(1<<6);i++) {
        int SN = 0;

        for(int b=0;b<6;b++) {
            if(i & (1<<b))
                SN += A[b];
        }
        if(SN + SN == S) return true;
    }
    return false;
}

int main() {
    scanf("%d", &T);

    while(T--) {
        S = 0;
        for(int i=0;i<6;i++) {
            scanf("%d", &A[i]);
            S += A[i];
        }

        printf("Tobby %spuede cruzar\n",solve()?"":"no ");
    }
    return 0;
}

