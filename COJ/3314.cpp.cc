#include <bits/stdc++.h>
using namespace std;

int t,n,s,d;
int tab[105];
int pos[12];
bool act[12];
int jvivos;
int actual;
int nw;
int winners[12];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d %d %d",&n,&s,&d);
        memset(act,1,sizeof(act));
        memset(pos,0,sizeof(pos));
        actual = nw = 0;
        jvivos = n;

        for(int i=0;i<s;i++)
            scanf("%d",&tab[i]);

        for(int i=0;i<d;i++) {
            int tirada;
            scanf("%d",&tirada);

//            printf("Jugador actual: %d\n",actual);
//            printf("Tirada: %d\n",tirada);
//            printf("Posicion: %d\n",pos[actual]);

            pos[actual]+= tirada;
//            printf("Posicion: %d\n",pos[actual]);
            pos[actual]+=tab[pos[actual]];
//            printf("Posicion: %d\n",pos[actual]);

            if(pos[actual]==s-1) {
//                printf("Llego a la meta\n");
                winners[nw++]=actual;
                act[actual]=false;
                jvivos--;
            }
            if(jvivos==0)
                break;
            actual = (actual + 1) % n;
            while(!act[actual])
                actual = (actual + 1) % n;

            //system("pause");
        }

        if(nw>0) {
            for(int i=0;i<nw;i++) {
                printf("%d",winners[i]+1);
                if(i < nw-1)
                    printf(" ");
            }
        }
        else
            printf("-1");
        printf("\n");
    }

    return 0;
}
