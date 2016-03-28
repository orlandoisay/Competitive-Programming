#include <bits/stdc++.h>
using namespace std;

int N,T;
char STR[110],STR2[110];
double C;

int main() {
    scanf("%d %s",&N,STR);
    scanf("%d",&T);

    for(int k=0;k<T;k++){
        C=0;
        scanf("%s",STR2);

        for(int i=0;i<N;i++) {
            if(STR2[i]!='#') {
                if(STR2[i]==STR[i])
                    C+=1.00;
                else
                    C-=0.25;
            }
        }
        printf("%.2f\n",C);
    }
    return 0;
}
