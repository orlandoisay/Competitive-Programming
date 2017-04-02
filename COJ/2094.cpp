#include <bits/stdc++.h>
using namespace std;

struct P {
    int i, j;
    P() {}
    P(int _i, int _j) { i = _i, j = _j; }
};

int n, m, r, mr, s;

int di[] = {0,1,0,-1},
    dj[] = {1,0,-1,0};

int inside(int i, int j) {
    return (i>=0 && i<n && j>=0 && j<m);
}

int main() {
    scanf("%d %d", &n, &m);

    char p[n][m+3];
    bool u[n][m+3];

    memset(u,0,sizeof(u));

    for(int i=0;i<n;i++)
        scanf("%s", p[i]);

    queue <P> cola;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(!u[i][j] && p[i][j] == '1') {
                u[i][j]=1;
                s = 1; r++;

                cola.push(P(i,j));

                while(!cola.empty()) {
                    P act = cola.front(); cola.pop();

                    for(int k=0;k<4;k++) {
                        P nv = P(act.i + di[k], act.j + dj[k]);

                        if(inside(nv.i, nv.j) && p[nv.i][nv.j] == '1' && !u[nv.i][nv.j]) {
                            u[nv.i][nv.j]=1;
                            s++;
                            cola.push(nv);
                        }
                    }
                }

                mr = max(mr, s);
            }
        }
    }

    printf("%d %d\n",r, mr);

    return 0;
}
