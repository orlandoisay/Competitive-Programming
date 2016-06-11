#include <bits/stdc++.h>
using namespace std;

int N,MX;
char W[100001];

int DPA[4][4][4][4];
int DPB[4][4][4][4];

int g(int x,int y,int z){
    bool c[4];
    memset(c,false,sizeof(c));
    c[x]=true;
    c[y]=true;
    c[z]=true;

    int R=0;
    for(int i=1;i<=3;i++){
        if(c[i])
            R++;
    }
    return R;
}

int main() {
    scanf("%d",&N);
    scanf("%s",W);

    for(int i=0;i<N;i++)
        switch(W[i]){
            case 'M': W[i]=1; break;
            case 'F': W[i]=2; break;
            case 'B': W[i]=3; break;
        }


    memset(DPB,-1,sizeof(DPB));
    DPB[0][0][0][0]=0;

    for(int i=0;i<N;i++){
        memcpy(DPA,DPB,sizeof(DPA));
        memset(DPB,-1,sizeof(DPB));
        for(int j=0;j<4;j++) {
            for(int k=0;k<4;k++) {
                for(int l=0;l<4;l++) {
                    for(int m=0;m<4;m++) {
                        if(DPA[j][k][l][m]!=-1) {
                            DPB[k][ W[i] ][l][m] = max(DPB[k][ W[i] ][l][m],DPA[j][k][l][m] + g(W[i],j,k));
                            DPB[j][k][m][ W[i] ] = max(DPB[j][k][m][ W[i] ],DPA[j][k][l][m] + g(W[i],l,m));
                            MX=max(MX,DPB[k][ W[i] ][l][m]);
                            MX=max(MX,DPB[j][k][m][ W[i] ]);
                        }
                    }
                }
            }
        }
    }

    printf("%d\n",MX);

    return 0;
}