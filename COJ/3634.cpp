#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N,T;
char dir,c[500005];
char buffer[200000];

int main() {
    while(scanf("%lld %lld %c",&N,&T,&dir)!=EOF) {
        scanf("%s\n|",buffer);
        for(int i=0;i<N;i++)
            scanf("%c|",&c[i]);
        scanf("%s",buffer);

        T%=N;

        //Imprimir la linea
        printf("+");
        for(int i=0;i<(2*N-1);i++)
            printf("-");
        printf("+\n|");


        if(dir=='L') {
            for(int i=T;i<N;i++)
                printf("%c|",c[i]);
            for(int i=0;i<T;i++)
                printf("%c|",c[i]);
        }
        else {
            for(int i=N-T;i<N;i++)
                printf("%c|",c[i]);
            for(int i=0;i<N-T;i++)
                printf("%c|",c[i]);
        }
         //Imprimir la linea
        printf("\n+");
        for(int i=0;i<(2*N-1);i++)
            printf("-");
        printf("+\n");
    }



    return 0;
}
