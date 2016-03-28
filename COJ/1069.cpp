#include <bits/stdc++.h>
using namespace std;

int T,A,B,C;

void solve(int M) {
    int R=0,Q;

    while(M>=C) {
        Q=M/C;
        R+=Q;
        M-=(Q*C);
        M+=Q;
    }

    printf("%d\n",R);
}

int main() {
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        scanf("%d %d %d",&A,&B,&C);
        if(C==1)
            printf("0\n");
        else
            solve(A+B);
    }

    return 0;
}
