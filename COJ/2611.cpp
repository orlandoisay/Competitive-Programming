#include <bits/stdc++.h>
using namespace std;

class Compra {
public:
    int cost, benefit, match;
    double order;

    Compra() {}

    Compra(int _c,int _b,int _m) {
        match = _m;
        cost = _c;
        benefit = _b;
        order = double(cost) / double(benefit);
    }

    void p() {
        printf("[%d %d]\n",cost,benefit);
    }
};

bool cmp(Compra a,Compra b) {
    return a.order < b.order;
}

int N,G,R, GF,GC;
vector <Compra> Compras;
Compra X;
bool U[1000001];

int main() {
    while(scanf("%d %d",&N,&G)!=EOF) {
        memset(U,0,sizeof(U));
        R = 0;
        Compras.clear();
        for(int i=0;i<N;i++) {
            scanf("%d %d",&GF,&GC);

            if(GF > GC)
                R+=3;
            if(GF == GC) {
                R++;
                Compras.push_back(Compra(1,2,i));
            }
            if(GF < GC) {
                Compras.push_back(Compra(GC-GF,1,i));
                Compras.push_back(Compra(GC-GF+1,3,i));
            }
        }
        sort(Compras.begin(),Compras.end(),cmp);

        for(int i=0;i<Compras.size();i++) {

            if(G>=Compras[i].cost && !U[Compras[i].match]) {
                U[Compras[i].match]=true;
                R+=Compras[i].benefit;
                G-=Compras[i].cost;
            }
            if(!G)
                break;
        }

        printf("%d\n",R);
    }
    return 0;
}
