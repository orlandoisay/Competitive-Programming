#include <bits/stdc++.h>
using namespace std;

class Estado {
public:
    int i,j,p;

    Estado() {}

    Estado(int _i,int _j,int _p) {
        i=_i, j=_j, p=_p;
    }

    bool operator <(Estado b) {
        return p < b.p;
    }

    bool inside(int N,int M) {
        return i >= 0 && j >= 0 && i < N && j < M;
    }
};

int N, U[15][15];
char MAP[15][15];
queue <Estado> cola;
Estado ini,fin;
int di[]={0,0,-1,1},
    dj[]={-1,1,0,0};

int main() {
    scanf("%d", &N);

    for(int i=0;i<N;i++)
        scanf("%s",MAP[i]);

    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            U[i][j]=10000;
            if(MAP[i][j]=='m'){
                U[i][j]=0;
                ini = Estado(i,j,0);
            }
            if(MAP[i][j]=='#')
                fin = Estado(i,j,0);
        }
    }

    cola.push(ini);

    while(!cola.empty()) {
        Estado actual = cola.front();
        cola.pop();

        for(int k=0;k<4;k++) {
            Estado nw(actual.i + di[k],actual.j + dj[k],actual.p + 1);
            if(nw.inside(N,N) && MAP[nw.i][nw.j]!='*' && nw.p < U[nw.i][nw.j]) {
                U[nw.i][nw.j] = nw.p;
                cola.push(nw);
            }
        }
    }

    if(U[fin.i][fin.j]!=10000)
        printf("%d\n",U[fin.i][fin.j]);
    else
        printf("-1\n");

    return 0;
}
