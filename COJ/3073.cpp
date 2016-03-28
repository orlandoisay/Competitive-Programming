#include <bits/stdc++.h>
using namespace std;

int N,L;
char W[120];

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%s",W);

        L=strlen(W);

        if(L>10)
            printf("%c%d%c\n",W[0],L-2,W[L-1]);
        else
            printf("%s\n",W);
    }
    return 0;
}
