#include <bits/stdc++.h>
#include <stdlib.h>
#define ll long long int
using namespace std;

int N,R;
vector <int> FIN;

int solve(int X) {
    int Y = X;
    int LEN = 0;
    int Sol=0;
    while(Y){
        Y/=10;
        LEN++;
    }

    for(int i = 1,r=1; i<=LEN; i++) {
        if((X/r)%10){
            Sol+=(r);
        }
        r*=10;
    }

    printf("%d ",Sol);
    return Sol;
}

int main() {
    scanf("%d",&N);

    int Mx=0,M=N;
    while(M){
        if(M%10>Mx)
            Mx=(M%10);
        M/=10;
    }
    printf("%d\n",Mx);

    while(N){
        N -= solve(N);
        R++;
    }

    return 0;
}