#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int k,n,m;

    void set(int pK,int pN,int pM){
        k=pK,n=pN,m=pM;
    }
}Estado;

int N,M,K,R=1;
char P[11][11][11];
int I,J;
bool U[10][10][10];
queue <Estado> cola;

int Dk[]={1,0,0,-1,0,0};
int Dn[]={0,1,0,0,-1,0};
int Dm[]={0,0,1,0,0,-1};

bool inRange(int k,int n,int m){
    if(k>=0 && k<K &&
       n>=0 && n<N &&
       m>=0 && m<M)
        return true;
    return false;
}

int main(){
    scanf("%d %d %d",&K,&N,&M);
    for(int i=0;i<K;i++)
        for(int j=0;j<N;j++)
            scanf("%s",P[i][j]);

    scanf("%d %d",&I,&J);

    Estado Ini;
    Ini.set(0,I-1,J-1);
    U[0][I-1][J-1]=true;
    cola.push(Ini);

    while(!cola.empty()){
        Estado Act=cola.front();
        cola.pop();
        //printf("%d %d %d:\n",Act.k,Act.n,Act.m);

        for(int i=0;i<6;i++){
            int nK=Act.k+Dk[i],nN=Act.n+Dn[i],nM=Act.m+Dm[i];
            if(inRange(nK,nN,nM) && P[nK][nN][nM]=='.' && !U[nK][nN][nM]){
                U[nK][nN][nM]=true;
                Estado Nv;
                Nv.set(nK,nN,nM);
                cola.push(Nv);
                R++;
                //printf("%d %d %d\n",nK,nN,nM);
            }
        }
        //system("pause");
    }

    printf("%d",R);


    return 0;
}