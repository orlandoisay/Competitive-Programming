#include <bits/stdc++.h>
using namespace std;

int n, r, c, m[105][105];

void solve() {
    r = -1, c = -1;
    bool corrupt = false;

    for(int i=0;i<n;i++) {
        int s = 0;

        for(int j=0;j<n;j++)
            s += m[i][j];

        if(s % 2) {
            if(r == -1) r = i;
            else corrupt = true;
        }
    }

    for(int j=0;j<n;j++) {
        int s = 0;

        for(int i=0;i<n;i++)
            s += m[i][j];

        if(s % 2) {
            if(c == -1) c = j;
            else corrupt = true;
        }
    }

    if(corrupt)
        printf("Corrupt\n");
    else if(r == -1 && c == -1)
        printf("OK\n");
    else if(r != -1 && c != -1)
        printf("Change bit (%d,%d)\n", r+1, c+1);
}

int main() {
    while(scanf("%d", &n) && n) {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d", &m[i][j]);
        solve();
    }

    return 0;
}
