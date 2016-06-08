#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

struct E{
    int v, c, p;
    E() {}
    E(int _v, int _c, int _p) { v = _v, c = _c, p = _p; }
};

int N, P, R, M[20][20], MN[70000];
char buffer[20];
queue <E> cola;
E I;

void init() {
    int v = 0, p = 0;
    for(int i=0;i<strlen(buffer);i++) {
        v += (buffer[i] == '1') ? (1<<i) : 0;
        p += (buffer[i] == '1') ? 1 : 0;
    }

    I = E(v,0,p);
}

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            scanf("%d", &M[i][j]);

    scanf("%s",buffer);
    init();
    scanf("%d",&P);

    for(int i=0;i<(1<<16);i++)
        MN[i] = INF;

    cola.push(I);
    MN[I.v] = 0;
    R = INF;

    if(P <= I.p) {
        printf("0\n");
        return 0;
    }

    while(!cola.empty()) {
        E act = cola.front(); cola.pop();

        for(int i=0;i<N;i++) {
            int nv = (1<<i) | act.v;

            if(nv != act.v) {
                for(int j=0;j<N;j++) {
                    if(act.v & (1<<j)) { // La planta i puede ser conectada desde la planta j
                        int nc = act.c + M[j][i];
                        int np = act.p + 1;

                        if(nc < MN[nv]) {
                            MN[nv] = nc;
                            if(np == P)
                                R = min(nc,R);
                            if(np < P) {
                                cola.push(E(nv,nc,np));
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n",R);


    return 0;
}
