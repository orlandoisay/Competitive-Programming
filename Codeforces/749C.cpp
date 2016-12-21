#include <bits/stdc++.h>
using namespace std;

int n, D, R, P, ii;
int nx[200005],
    bf[200005];
char s[200005], cr;

void quit(int x) {
    int nxi = nx[x], bfi = bf[x];

    nx[bfi] = nxi;
    bf[nxi] = bfi;
}

int main() {
    scanf("%d", &n);
    scanf("%s", s);

    for(int i=0;i<n;i++) {
        nx[i] = (i + 1) % n, bf[i] = (n+i-1) % n;
        if(s[i] == 'D') D++; else R++;
    }

    cr = s[0];

    while(D && R) {
        if(s[ii] != cr) {
            if(P > 0) { // QUITAR
                if(s[ii] == 'D') D--; else R--;
                P--;

                quit(ii);
            }
            else {
                P++;
                cr = s[ii];
            }
        }
        else {
            P++;
        }

        ii = nx[ii];
    }

    if(D) printf("D\n");
    if(R) printf("R\n");

    return 0;
}