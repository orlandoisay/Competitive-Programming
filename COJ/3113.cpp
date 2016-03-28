#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int X,Y;
}Punto;

int N,D;
Punto L[100000];
int Mx;

int main(){
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d %d",&L[i].X,&L[i].Y);
        if(i>0){
            D+=abs(L[i].X-L[i-1].X);
            D+=abs(L[i].Y-L[i-1].Y);
        }
    }

    for(int i=1;i<N-1;i++){
        int Orig=(abs(L[i].X-L[i-1].X)+abs(L[i+1].X-L[i].X))+
                (abs(L[i].Y-L[i-1].Y)+abs(L[i+1].Y-L[i].Y));
        int Nuev=abs(L[i+1].X-L[i-1].X)+abs(L[i+1].Y-L[i-1].Y);

        if(Orig-Nuev>Mx){
            Mx=Orig-Nuev;
        }
    }

    printf("%d\n",D-Mx);

    return 0;
}
