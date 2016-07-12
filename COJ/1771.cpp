#include <bits/stdc++.h>
#define E pair <int,int>
using namespace std;

int N, M, C[1005], T[1005];
vector <int> ady[1005];
priority_queue< E > cola;

int main() {
    scanf("%d %d",&N, &M);
    for(int i=1;i<=N;i++)
        scanf("%d",&C[i]);

    for(int i=0;i<M;i++) {
        int A, B;
        scanf("%d %d",&A,&B);
        ady[A].push_back(B);
        ady[B].push_back(A);
    }

    for(int i=1;i<=N;i++)
        T[i] = -1000000000;

    T[1] = 0;

    cola.push(make_pair(0,1));

    while(!cola.empty()) {
        E act = cola.top(); cola.pop();

        bool f = false;

        for(int i=0;i<ady[act.second].size();i++) {
            E nv = make_pair(act.first - C[ady[act.second][i]], ady[act.second][i]);

            if(nv.first > T[nv.second]) {
                T[nv.second] = nv.first;

                if(nv.second == N) {
                    f = true;
                    break;
                }
                else
                    cola.push(nv);
            }
        }

        if(f) break;
    }

    printf("%d\n",-T[N] - C[N]);



    return 0;
}
