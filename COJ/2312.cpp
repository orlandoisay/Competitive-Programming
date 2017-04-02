#include <bits/stdc++.h>
using namespace std;

string charToBin(char c) {
    string r = "00000";
    if(c == ' ') return r;

    r = "";
    int x = c - 'A' + 1;

    for(int i=0;i<5;i++, x/=2)
        r += (x%2)? "1" : "0";
    reverse(r.begin(),r.end());
    return r;
}

string encodeStr(string &str) {
    string r = "";
    for(int i=0;i<str.size();i++)
        r += charToBin(str[i]);
    return r;
}

string finalEncode(string &str, int R, int C) {
    string f = encodeStr(str);

    int di[] = {0,1,0,-1},
        dj[] = {1,0,-1,0};

    char M[25][25];
    bool U[25][25];

    memset(M, 0, sizeof(M));
    memset(U, 0, sizeof(U));

    int i=0, j=0, k=0;

    for(int p=0;p<(R*C);p++) {
//        printf("%d %d\n",i,j);
//        system("pause");
        M[i][j] = (p<f.size()) ? f[p] : '0';
        U[i][j] = true;

        if(p < (R*C)-1) {
            for(int tr=0;tr<4;tr++)  {
                int ni = i+di[k%4],
                    nj = j+dj[k%4];

                if(0 <= ni && ni < R && 0 <= nj && nj < C && !U[ni][nj]) {
                    i = ni, j = nj;
                    break;
                }
                else {
                    k++;
                }
            }
        }
    }

    string r = "";

    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
            r += M[i][j];

    return r;
}

int X=1, T, R, C;
char buffer[100];
string MSG;

int main() {
    fgets(buffer,100,stdin);
    sscanf(buffer,"%d", &T);

    while(T--) {
        fgets(buffer,100,stdin);
        sscanf(buffer,"%d %d", &R, &C);

        int i=0;
        while(buffer[i] != ' ') i++;
        i++;
        while(buffer[i] != ' ') i++;
        i++;

        MSG = "";
        while(i<strlen(buffer)-1)
            MSG += buffer[i++];

        printf("%d %s\n",X++, finalEncode(MSG, R, C).c_str());
    }

    return 0;
}
