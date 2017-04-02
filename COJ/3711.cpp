#include <bits/stdc++.h>
using namespace std;

int T, N, S, M[30][30];
bool U[30];
bool solved;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%d",&N);
        S = 1;
        while(S*S<N)S++;

        for(int r=0;r<N;r++)
            for(int c=0;c<N;c++)
                scanf("%d", &M[r][c]);

        solved = true;

        // rows
        for(int r=0;r<N;r++) {
            memset(U, 0, sizeof(U));

            for(int c=0;c<N;c++)
                U[M[r][c]] = true;

            for(int i=1;i<=N;i++)
                if(!U[i])
                    solved = false;
        }

        // cols
        for(int c=0;c<N;c++) {
            memset(U, 0, sizeof(U));

            for(int r=0;r<N;r++)
                U[M[r][c]] = true;

            for(int i=1;i<=N;i++)
                if(!U[i])
                    solved = false;
        }

        //blocks
        for(int b=0;b<N;b++) {
            memset(U, 0, sizeof(U));

            int bi = (b / S) * S,
                bj = (b % S) * S;

            for(int r=bi;r<bi+S;r++)
                for(int c=bj;c<bj+S;c++)
                    U[M[r][c]] = true;

            for(int i=1;i<=N;i++)
                if(!U[i])
                    solved = false;
        }

        printf("%s\n", solved ? "yes" : "no");
    }

    return 0 ;
}
