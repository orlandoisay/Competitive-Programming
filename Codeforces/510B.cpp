#include <bits/stdc++.h>
#define ll long long int
using namespace std;

typedef struct {
    int i,j;
}Loc;

int N,M;
char ORIG[55][55];
bool U[55][55];
int C[55][55];
char ACTUAL;

queue <Loc> cola;

int Di[]={1,-1,0,0};
int Dj[]={0,0,1,-1};

bool dentro(int i,int j){
    if(i>=0 && i< N && j>=0 && j<M)
        return true;
    return false;
}

int main(){
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        scanf("%s",ORIG[i]);

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(!U[i][j]){
                U[i][j]=true;
                ACTUAL=ORIG[i][j];

                Loc Est;
                Est.i=i;
                Est.j=j;
                cola.push(Est);

                while(cola.size()>0){
                    Loc Act = cola.front();
                    cola.pop();

                    U[Act.i][Act.j]=true;

                    for(int k=0;k<4;k++){
                        Loc Nv = Act;
                        Nv.i+=Di[k];
                        Nv.j+=Dj[k];
                        if(dentro(i,j) && ORIG[Nv.i][Nv.j]==ACTUAL){
                            if(!U[Nv.i][Nv.j]){
                                C[Nv.i][Nv.j]++;
                                if(C[Nv.i][Nv.j]==2){
                                    printf("Yes");
                                    return 0;
                                }
                                cola.push(Nv);
                            }
                        }
                    }
                }
            }
        }
    }
    printf("No");
    return 0;
}