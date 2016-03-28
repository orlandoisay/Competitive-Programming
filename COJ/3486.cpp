#include <bits/stdc++.h>

int S[9][9];
char buff[25];

int rows[9][9],
    cols[9][9],
    sqrs[9][9];

int main() {

    for(int i=0;i<3;i++)
        scanf("%d %d %d | %d %d %d | %d %d %d",&S[i][0],&S[i][1],&S[i][2],&S[i][3],&S[i][4],&S[i][5],&S[i][6],&S[i][7],&S[i][8]);
    scanf("%s",buff);
    for(int i=3;i<6;i++)
        scanf("%d %d %d | %d %d %d | %d %d %d",&S[i][0],&S[i][1],&S[i][2],&S[i][3],&S[i][4],&S[i][5],&S[i][6],&S[i][7],&S[i][8]);
    scanf("%s",buff);
    for(int i=6;i<9;i++)
        scanf("%d %d %d | %d %d %d | %d %d %d",&S[i][0],&S[i][1],&S[i][2],&S[i][3],&S[i][4],&S[i][5],&S[i][6],&S[i][7],&S[i][8]);

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            int cell = S[i][j] - 1;

            rows[i][cell]++;
            cols[j][cell]++;
            sqrs[3*(int)(i/3)+(j/3)][cell]++;
        }
    }

    bool possible = true;

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            if(rows[i][j] != 1 || cols[i][j] != 1 || sqrs[i][j] != 1) {
                possible = false;
                break;
            }
        }
    }

    if(possible)
        printf("CORRECT\n");
    else
        printf("WRONG\n");

    return 0;
}
