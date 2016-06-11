#include <bits/stdc++.h>
using namespace std;

int N, X, R, maxFactor[20001];

int main() {
    for(int i=2;i<=20000;i++) {
        if(maxFactor[i] == 0) {
            for(int j=i;j<=20000;j+=i)
                maxFactor[j] = i;
        }
    }
    scanf("%d",&N);

    while(N--) {
        scanf("%d",&X);
        if(maxFactor[X] > maxFactor[R])
            R = X;
    }
    printf("%d\n",R);
    return 0;
}
