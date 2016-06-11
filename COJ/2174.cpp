#include <bits/stdc++.h>
using namespace std;

int N,F,C;
char M[300][300];

void putTri(int i,int j,char c) {
    M[i][j] = c;
    if(c == 'a') M[i-1][j] = M[i][j-1] = c;
    if(c == 'b') M[i-1][j] = M[i][j+1] = c;
    if(c == 'c') M[i+1][j] = M[i][j+1] = c;
    if(c == 'd') M[i+1][j] = M[i][j-1] = c;
}

/**
 * Takes three point's coordinates
 * A - The upper-left point of the square
 * B - The lower-right point of the square
 * C - The "non-existing" point
 */
void solve(int Ai,int Aj,int Bi,int Bj,int Pi, int Pj) {
    M[Pi][Pj] = '0';

    if(Ai + 1 == Bi) { // When the size of the square is 2
        if(Ai == Pi && Aj == Pj) putTri(Bi,Bj,'a');
        if(Ai == Pi && Bj == Pj) putTri(Bi,Aj,'b');
        if(Bi == Pi && Bj == Pj) putTri(Ai,Aj,'c');
        if(Bi == Pi && Aj == Pj) putTri(Ai,Bj,'d');
        return;
    }

    int Mi = (Ai+Bi)/2,
        Mj = (Aj+Bj)/2;

    if(Pi <= Mi && Pj <= Mj) {
        solve(Ai,Aj,Mi,Mj,Pi,Pj);
        solve(Ai,Mj+1,Mi,Bj,Mi,Mj+1);
        solve(Mi+1,Aj,Bi,Mj,Mi+1,Mj);
        solve(Mi+1,Mj+1,Bi,Bj,Mi+1,Mj+1);
        putTri(Mi+1,Mj+1,'a');
    }
    if(Pi <= Mi && Pj > Mj) {
        solve(Ai,Aj,Mi,Mj,Mi,Mj);
        solve(Ai,Mj+1,Mi,Bj,Pi,Pj);
        solve(Mi+1,Aj,Bi,Mj,Mi+1,Mj);
        solve(Mi+1,Mj+1,Bi,Bj,Mi+1,Mj+1);
        putTri(Mi+1,Mj,'b');
    }
    if(Pi > Mi && Pj <= Mj) {
        solve(Ai,Aj,Mi,Mj,Mi,Mj);
        solve(Ai,Mj+1,Mi,Bj,Mi,Mj+1);
        solve(Mi+1,Aj,Bi,Mj,Pi,Pj);
        solve(Mi+1,Mj+1,Bi,Bj,Mi+1,Mj+1);
        putTri(Mi,Mj+1,'d');
    }
    if(Pi > Mi && Pj > Mj) {
        solve(Ai,Aj,Mi,Mj,Mi,Mj);
        solve(Ai,Mj+1,Mi,Bj,Mi,Mj+1);
        solve(Mi+1,Aj,Bi,Mj,Mi+1,Mj);
        solve(Mi+1,Mj+1,Bi,Bj,Pi,Pj);
        putTri(Mi,Mj,'c');
    }
}

int main() {
    scanf("%d %d %d",&N,&F,&C);
    N = 1<<N;

    solve(0,0,N-1,N-1,F,C);

    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++)
            printf("%c",M[i][j]);
        printf("\n");
    }


    return 0;
}
