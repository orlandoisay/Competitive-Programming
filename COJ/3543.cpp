#include <bits/stdc++.h>
using namespace std;

int N, V[1005], R = 100000000;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&V[i]);

    for(int i=0;i<N;i++) {
        int NR = 0;

        for(int j=0;j<N;j++)
            NR += j * V[(i+j)%N];

        R = min(R, NR);
    }

    printf("%d\n",R);
    return 0;
}
