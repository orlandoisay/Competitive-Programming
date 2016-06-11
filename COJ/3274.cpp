#include <bits/stdc++.h>
using namespace std;

int T,N,DIV[1005];

int main() {
    for(int i=2;i<=1000;i++) {
        if(DIV[i] == 0) {
            for(int j=i;j<=1000;j+=i) {
                DIV[j]++;
            }
        }
    }

    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%d\n",DIV[N]);
    }

    return 0;
}
