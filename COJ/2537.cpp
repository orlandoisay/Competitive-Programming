#include <bits/stdc++.h>
using namespace std;

int t,r,n,g,cards[10],players[10];

bool check() {
    bool R[8];
    memset(R,0,sizeof(R));
    for(int i=0;i<n;i++) {
        if(players[i]==0) {
            if(!R[g])
                return true;
            else
                return false;
        }
        int trc = cards[players[i]];
        while(R[trc])
            trc=(trc+1)%n;
        R[trc]=true;
    }
}

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);

        for(int i=0;i<n;i++) {
            scanf("%d",&cards[i]);
            players[i]=i;
        }
        g=cards[0];

        do {
            if(check())r++;
        } while(next_permutation(players,players+n));

        printf("%d\n",r);
        r=0;
    }

    return 0;
}
