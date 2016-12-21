#include <bits/stdc++.h>
using namespace std;

int n, m, k, ct[1001], sz[1001];
vector <int> ady[1001];

int CS;
bool U[1001];

void calcSize(int node) {
    if(U[node])
        return;

    U[node] = 1;
    CS++;

    for(int i=0;i<ady[node].size();i++)
        calcSize(ady[node][i]);
}

int fx(int x) {
    return (x * (x - 1)) / 2;
}

int main() {
    scanf("%d %d %d", &n, &m, &k);

    for(int i=0;i<k;i++)
        scanf("%d", &ct[i]);

    for(int i=0;i<m;i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        ady[a].push_back(b);
        ady[b].push_back(a);
    }

    int sF = n;

    for(int i=0;i<k;i++) {
        CS = 0;
        calcSize(ct[i]);
        sz[i] = CS;
        sF -= CS;
    }

    sort(sz,sz+k);

    sz[k-1] += sF;

    int R = 0;

    for(int i=0;i<k;i++)
        R += fx(sz[i]);

    printf("%d\n", R-m);

    return 0;
}