#include <bits/stdc++.h>
using namespace std;

int N,M,a,b;
vector <int> ady[200];
int c[200];

bool color(int node,int col) {
    if(c[node] != -1) {
        if(c[node] != col)
            return false;
        return true;
    }
    c[node] = col;

    for(int i=0;i<ady[node].size();i++) {
        int n_node = ady[node][i];
        if(!color(n_node,1-col))
            return false;
    }
    return true;
}

int main() {

    while(true) {
        scanf("%d",&N);

        if(!N)
            break;
        scanf("%d",&M);

        for(int i=0;i<N;i++)
            ady[i].clear();

        for(int i=0;i<M;i++) {
            scanf("%d %d",&a,&b);
            ady[a].push_back(b);
            ady[b].push_back(a);
        }

        memset(c,-1,sizeof(c));

        if(color(0,0))
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }

    return 0;
}
