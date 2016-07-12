#include <bits/stdc++.h>
using namespace std;

int T, N, C[500505], R[1005];

int main() {
    for(int i=2,r=2,a=3;i<500500;i++) {
        if(!C[i]) {
            while(i > a)
                a += 1 + r++;
            R[r]+=i;

            for(int j=i+i;j<500500;j+=i)
                C[j] = 1;
        }
    }

    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%d\n",R[N]);
    }

    return 0;
}
