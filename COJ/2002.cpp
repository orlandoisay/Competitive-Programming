#include <bits/stdc++.h>
using namespace std;

int N, R, V[1000];

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&V[i]);

    for(int i=0;i<N;i++) {
        int NR = 0, IGNORE = V[i], ACT = -1;

        for(int j=0;j<N;j++) {
            if(V[j] != IGNORE) {
                if(V[j] == ACT)
                    NR++;
                else {
                    ACT = V[j];
                    NR=1;
                }
            }
            R = R < NR ? NR : R;
        }
    }

    printf("%d\n",R);

    return 0;
}
