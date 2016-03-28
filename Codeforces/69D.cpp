#include <bits/stdc++.h>
using namespace std;

struct Vec {
    int x,y;
};

int X,Y,N,D;
Vec L[20];
int DP[1000][1000];

bool enRango(int x,int y){
    if(x*x + y*y <= D*D)
        return true;
    return false;
}

int main() {
    scanf("%d %d %d %d",&X,&Y,&N,&D);
    for(int i=0;i<N;i++)
        scanf("%d %d",&L[i].x,&L[i].y);

    memset(DP,0,sizeof(DP));

    for(int i=200;i>=-200;i--) {
        for(int j=200;j>=-200;j--) {
            if(enRango(i,j)) {
                bool Ganador=false;
                //printf("%d %d\n",i,j);
                for(int k=0;k<N;k++) {
                    int nX,nY;
                    nX=i+L[k].x;
                    nY=j+L[k].y;
                    //printf(".(%d %d)",nX,nY);

                    if(DP[nX+300][nY+300]==1){
                        Ganador=true;
                        break;
                    }
                }
                if(!Ganador)
                    DP[i+300][j+300]=1;

                //printf("[%d]\n",DP[i+300][j+300]);
                //system("pause");
            }
        }
    }
    



    if(DP[X+300][Y+300])
        printf("Dasha");
    else
        printf("Anton");

    return 0;
}