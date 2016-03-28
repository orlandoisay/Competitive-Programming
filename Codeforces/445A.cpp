#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int i,j;
    bool B;
}P;

int N,M;
char W[105][105];
bool U[105][105];

int Di[]={-1,1,0,0};
int Dj[]={0,0,-1,1};

void bfs(int i,int j){
    queue <P> cola;
    P A;
    A.i=i;
    A.j=j;
    A.B=1;

    cola.push(A);

    while(!cola.empty()){
        P Act = cola.front();
        cola.pop();
        if(!U[Act.i][Act.j]){
            U[Act.i][Act.j]=true;
            if(Act.B)
                W[Act.i][Act.j]='B';
            else
                W[Act.i][Act.j]='W';

            for(int k=0;k<4;k++){
                int Ni=Act.i+Di[k],Nj=Act.j+Dj[k];
                if(Ni>=0 && Ni<N && Nj>=0 && Nj<M && W[Ni][Nj]=='.'){
                    P Nw;
                    Nw.i=Ni;
                    Nw.j=Nj;
                    Nw.B=!Act.B;
                    cola.push(Nw);
                }
            }
        }
    }
}

int main(){
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        scanf("%s",W[i]);

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(W[i][j]=='.'){
                bfs(i,j);
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%s\n",W[i]);
    }
    return 0;
}