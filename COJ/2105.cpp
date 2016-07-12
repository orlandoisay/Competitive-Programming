#include <bits/stdc++.h>
using namespace std;

int N, M, R;
char C[1005][1005];
int dx[] = {-1,1,0,0},
    dy[] = {0,0,-1,1};

int main() {
    scanf("%d %d",&N, &M);

    for(int i=0;i<N;i++)
        scanf("%s",C[i]);

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(C[i][j] == '+') {
                bool coast = false;

                for(int k=0;k<4;k++) {
                    int ni = i + dx[k],
                        nj = j + dy[k];

                    if(0 <= ni && ni < N && 0 <= nj && nj < M && C[ni][nj] == '-')
                        coast = true;
                }

                if(coast) R++;
            }
        }
    }

    printf("%d\n",R);

    return 0;
}
