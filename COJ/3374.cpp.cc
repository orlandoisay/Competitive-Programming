#include <bits/stdc++.h>
using namespace std;

class point {
public:
    int i,j;
    point() {}
    point(int _i,int _j) {
        i=_i,j=_j;
    }

    point operator + (point b) {
        point r(i,j);
        r.i+=b.i;
        r.j+=b.j;
        return r;
    }

    bool inside(int r,int c) {
        return (i >=0 && i < r && j >= 0 && j < c);
    }
};

int n,m;
char mapa[105][105];
bool u[105][105];
int r[3];

void marcar(int i,int j) {
    queue <point> cola;

    point a[4];

    a[0] = point(0,1);
    a[1] = point(1,0);
    a[2] = point(0,-1);
    a[3] = point(-1,0);

    point ini(i,j);
    cola.push(ini);
    u[i][j] = true;

    while(!cola.empty()) {
        point cur = cola.front();
        cola.pop();

        for(int k=0;k<4;k++) {
            point nv = cur + a[k];

            if(nv.inside(n,m) && !u[nv.i][nv.j] && mapa[nv.i][nv.j]=='0') {
                u[nv.i][nv.j] = true;
                cola.push(nv);
            }
        }
    }
}

int der(int x) {
    return (x+1)%4;
}

int izq(int x) {
    return (4+x-1)%4;
}

int lados(int i,int j) {
    point a[4];

    a[0] = point(0,1);
    a[1] = point(1,0);
    a[2] = point(0,-1);
    a[3] = point(-1,0);

    point ini(i,j),act,nv;
    int nl=0,dir = 0;
    act = ini;

    do  {
        nv = act + a[dir];

        if(!nv.inside(n,m)) {
            dir = der(dir);
            nl++;
        }
        else if(mapa[nv.i][nv.j]=='.'){
            dir = der(dir);
            nl++;
        }
        else {

            point nv2 = nv + a[izq(dir)];

            if(!nv2.inside(n,m)) {
                act = nv;

            }
            else if(mapa[nv2.i][nv2.j]=='.') {
                act = nv;

            }
            else {
                dir = izq(dir);
                act = nv;
                nl++;

            }
        }
    } while(act.i != ini.i || act.j != ini.j || dir != 0);

    return nl;
}

int main() {
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
        scanf("%s",mapa[i]);

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(mapa[i][j]=='0' && !u[i][j]) {
                marcar(i,j);
                int rt = lados(i,j);

                if(rt == 4)
                    r[0]++;
                if(rt == 6)
                    r[1]++;
                if(rt == 8)
                    r[2]++;
            }
        }
    }

    printf("%d %d %d\n",r[0],r[1],r[2]);
    return 0;
}
