#include <bits/stdc++.h>
using namespace std;

int N, V[1500];
vector<int> R[15];

void solve(int inf, int sup, int depth) {
    int med = (inf + sup) / 2;
    R[depth].push_back(V[med]);

    if(inf == sup)
        return;

    solve(inf,med-1,depth+1);
    solve(med+1,sup,depth+1);
}

int main() {
    scanf("%d",&N);

    for(int i=0;i<(1<<N)-1;i++)
        scanf("%d",&V[i]);

    solve(0,(1<<N)-2,0);

    for(int i=0;i<N;i++) {
        for(int j=0;j<R[i].size();j++) {
            printf("%d",R[i][j]);
            if(j<R[i].size()-1) printf(" ");
            else printf("\n");
        }
    }

    return 0;
}
