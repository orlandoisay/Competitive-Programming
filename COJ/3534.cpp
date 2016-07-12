#include <bits/stdc++.h>
#define MAXN 1000000
using namespace std;

int T, A, B;
int NPR[MAXN+5], MUL[MAXN+5], KN[MAXN+5], RES[MAXN+5];

int main() {
    for(int i=0;i<MAXN+5;i++) MUL[i] = 1;

    for(int i=2;i<MAXN;i++) {
        if(!NPR[i]) {
            for(int j=i;j<=MAXN;j+=i) {
                KN[j]++;
                MUL[j] *= i;
                NPR[j] = 1;
            }
            NPR[i] = 0;
        }
    }

    for(int i=2;i<=MAXN;i++) {
        RES[i] = RES[i-1];
        if(i == MUL[i] && KN[i] == 3)
            RES[i]++;
    }

    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&A,&B);
        printf("%d\n",RES[B]-RES[A-1]);
    }

    return 0;
}
