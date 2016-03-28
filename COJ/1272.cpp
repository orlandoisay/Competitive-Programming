#include <bits/stdc++.h>
#define MAX 50000
using namespace std;

struct Step {
    int pos, dist;
    Step() {}
    Step(int _pos,int _dist) { pos = _pos, dist = _dist; }
};

int T, N, M, A, B;
vector < vector <int> > ady;
vector < int > dist;
queue < Step > cola;

int main() {
    scanf("%d",&T);

    while(T--) {
        ady.clear();
        dist.clear();

        scanf("%d %d",&N,&M);

        ady.resize(N+1);
        dist.resize(N+1);

        for(int i=1;i<=N;i++)
            dist[i] = MAX;

        for(int i=0;i<M;i++) {
            scanf("%d %d",&A,&B);
            ady[A].push_back(B);
            ady[B].push_back(A);
        }

        Step ini(1,0);
        dist[1] = 0;
        cola.push(ini);

        while(!cola.empty()) {
            Step act = cola.front();
            cola.pop();

            for(int i=0;i<ady[act.pos].size();i++) {
                int nPos = ady[act.pos][i], nDist = act.dist + 1;

                if(nDist < dist[nPos]) {
                    dist[nPos] = nDist;
                    cola.push(Step(nPos,nDist));
                }
            }
        }

        int mx = 0,cMx = 1,iMx = 1;

        for(int i=2;i<=N;i++) {
            if(dist[i] > mx) {
                mx = dist[i];
                cMx = 1;
                iMx = i;
            }
            else if(dist[i] == mx) {
                cMx++;
            }
        }

        printf("%d %d %d\n",iMx,mx,cMx);
    }
    return 0;
}
