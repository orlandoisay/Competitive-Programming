#include <stdio.h>

int T,NG,NM,MG,MM,X;

int main(){
    scanf("%d",&T);

    for(int k=0;k<T;k++){
        scanf("%d %d",&NG,&NM);
        MG=MM=0;
        for(int i=0;i<NG;i++){
            scanf("%d",&X);
            MG=X>MG?X:MG;
        }

        for(int i=0;i<NM;i++){
            scanf("%d",&X);
            MM=X>MM?X:MM;
        }

        if(MM>MG)
            printf("MechaGodzilla\n");
        else
            printf("Godzilla\n");
    }

    return 0;
}
