#include <bits/stdc++.h>
using namespace std;

int R, C, Q, px1, px2, py1, py2, FIELD[1001][1001];

int main() {
    scanf("%d %d %d",&R,&C,&Q);

    for(int i=1;i<=R;i++) {
        for(int j=1;j<=C;j++) {
            scanf("%d", &FIELD[i][j]);
            if(FIELD[i][j]<0)
                FIELD[i][j] = 0;
        }
    }

    for(int i=2;i<=R;i++)
        FIELD[i][1] += FIELD[i-1][1];

    for(int i=2;i<=C;i++)
        FIELD[1][i] += FIELD[1][i-1];

    for(int i=2;i<=R;i++)
        for(int j=2;j<=C;j++)
            FIELD[i][j] += FIELD[i-1][j] + FIELD[i][j-1] - FIELD[i-1][j-1];

    while(Q--) {
        scanf("%d %d %d %d",&px1,&py1,&px2,&py2);
        printf("%d\n",FIELD[px2][py2]+FIELD[px1-1][py1-1]-FIELD[px2][py1-1]-FIELD[px1-1][py2]);
    }

    return 0;
}
