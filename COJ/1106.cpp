#include <bits/stdc++.h>
using namespace std;

int N, X, A,B;

int main() {
    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        scanf("%d", &X);
        if(i%2) A += X;
        else    B += X;
    }

    printf("%d %d\n",max(A,B),min(A,B));

    return 0;
}
