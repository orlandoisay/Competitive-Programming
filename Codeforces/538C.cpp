#include <bits/stdc++.h>
using namespace std;

struct note {
    int d,h;
};

int N,M,MX;
note L[100000];

int main() {
    scanf("%d %d",&N,&M);

    for(int i=0;i<M;i++)
        scanf("%d %d",&L[i].d,&L[i].h);

    for(int i=1;i<M;i++) {
        if(L[i].d - L[i-1].d < abs(L[i].h-L[i-1].h)){
            printf("IMPOSSIBLE");
            return 0;
        }
    }

    MX = max (L[0].d-1+L[0].h,MX);
    MX = max (N-L[M-1].d+L[M-1].h,MX);

    for(int i=1;i<M;i++) {
        int dist = L[i].d - L[i-1].d - 1 + L[i].h + L[i-1].h;
        MX = max ((dist+1)/2,MX);
    }

    printf("%d",MX);

    return 0;
}