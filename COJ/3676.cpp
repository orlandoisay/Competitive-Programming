#include <bits/stdc++.h>
using namespace std;

int T, L, R, i, j;
char N[10050], RES[10050];

int main() {
    scanf("%d",&T);

    for(int k=1;k<=T;k++) {
        scanf("%s", N);
        L = strlen(N);
        R = 0;
        printf("Case %d: ", k);

        if(L == 1 && N[0] < '5') {
            printf("0,%d\n",(N[0]-'0') * 2);
            continue;
        }

        memset(RES,0,sizeof(RES));

        for(i=0,j=0;i<L;i++) {
            R = R*10 + (N[i]-'0');
            if(R >= 5) {
                RES[j++] = '0' + R/5;
                R %= 5;
            }
            else if(j) {
                RES[j++] = '0';
            }
        }
        if(R) {
            RES[j++] = ',';
            RES[j++] = '0' + R*2;
        }

        printf("%s\n", RES);
    }

    return 0;
}
