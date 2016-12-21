#include <bits/stdc++.h>
using namespace std;

int n, m;
char c[505][505];
int mni,mxi,mnj,mxj;

int main() {
    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++)
        scanf("%s",c[i]);

    bool f;

    f = true;
    while(f) {
        for(int j=0;j<m;j++) {
            if(c[mni][j] == 'X') {
                f = false;
                break;
            }
        }
        if(f)mni++;
    }

    f = true;
    while(f) {
        for(int i=0;i<m;i++) {
            if(c[i][mnj] == 'X') {
                f = false;
                break;
            }
        }
        if(f)mnj++;
    }

    f = true;
    mxi = n - 1;
    while(f) {
        for(int j=0;j<m;j++) {
            if(c[mxi][j] == 'X') {
                f = false;
                break;
            }
        }
        if(f)mxi--;
    }

    f = true;
    mxj = m-1;
    while(f) {
        for(int i=0;i<m;i++) {
            if(c[i][mxj] == 'X') {
                f = false;
                break;
            }
        }
        if(f)mxj--;
    }

    // Check final

    bool R = true;

    for(int i=mni;i<=mxi;i++)
        for(int j=mnj;j<=mxj;j++)
            if(c[i][j] == '.')
                R = false;

    printf("%s\n", R ? "YES" : "NO");

    return 0;
}