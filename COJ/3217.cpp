#include <bits/stdc++.h>
using namespace std;

int N, R = 100000000, H[1005];

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&H[i]);

    sort(H,H+N);

    for(int mn = H[0]; mn <= H[N-1]-17; mn++) {
        int NR = 0;

        for(int i=0;i<N;i++) {
            if(H[i] < mn)
                NR += (mn - H[i])*(mn - H[i]);
            if(H[i] > mn+17)
                NR += (H[i]-(mn+17))*(H[i]-(mn+17));
        }

        R = NR < R ? NR : R;
    }

    printf("%d\n",R);

    return 0;
}
