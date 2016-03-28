#include <bits/stdc++.h>
#define LIM 4567900
using namespace std;

bool U[LIM+1];
int NP,Primes[330000];
int N;

void init() {
    for(int i=2;i<LIM;i++) {
        if(!U[i]) {
            Primes[NP++] = i;
            for(int j=i;j<=LIM;j+=i)
                U[j]=true;
        }
    }
}

int main() {
    init();
    for(int i=0;i<10;i++) {
        scanf("%d",&N);
        int R = 0;
        while(Primes[R] <= N)
            R++;
        printf("%d\n",R);
    }
    return 0;
}
