#include <bits/stdc++.h>
using namespace std;

struct pos {
    int i,j;
    pos() {}
    pos(int _i, int _j) {
        i = _i, j = _j;
    }
};

int N, C, X, Y, CANS[125][250];
queue <pos> cola;

// 0-No Can
// 1-Can
// 2-Shouted

int main() {
    scanf("%d %d",&N,&C);

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N-i+1;j++) {
            CANS[i][i-2+2*j] = 1;
        }
    }

    while(C--) {
        scanf("%d %d",&X,&Y);
        cola.push(pos(Y,X));

        int R = 0;

        while(!cola.empty()) {
            pos act = cola.front(); cola.pop();
            if(CANS[act.i][act.j] == 1) {
                R++;
                CANS[act.i][act.j] = 2;
                cola.push(pos(act.i+1,act.j-1));
                cola.push(pos(act.i+1,act.j+1));
            }
        }

        printf("%d\n",R);
    }

    for(int i=N;i>0;i--) {
        for(int j=1;j<2*N;j++) {
            switch(CANS[i][j]) {
            case 0:
                printf("0");
                break;
            case 1:
                printf("1");
                break;
            case 2:
                printf("X");
                break;
            }
        }
        printf("\n");
    }
}
