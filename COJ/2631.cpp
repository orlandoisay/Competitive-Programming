#include <bits/stdc++.h>
using namespace std;

int T,N,R[]={1,12,213,2314,24513,312456,3412567,36712458};

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d",&N);
        printf("%d\n",R[N-1]);
    }

    return 0;
}
