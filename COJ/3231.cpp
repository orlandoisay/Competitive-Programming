#include <bits/stdc++.h>
using namespace std;

int N;
char M[25];
char W[25];

int main() {
    scanf("%d",&N);

    for(int i=0;i<2*N-1;i++){
        scanf("%s",W);

        for(int j=0;j<strlen(W);j++){
            M[j]=M[j]^W[j];
        }

    }

    printf("%s\n",M);
    return 0;
}
