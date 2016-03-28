#include <bits/stdc++.h>
using namespace std;

int T;
char a[1100],b[1100];

bool s(int x,int y) {
    if(a[x] == b[x])
        return a[y] == b[y];
    else
        return (a[x] == b[y] && a[y] == b[x]);
}

void solve() {
    if(strlen(a) != strlen(b)) {
        printf("NO\n");
        return;
    }

    for(int i=0;i<=(strlen(a)/2);i++) {
        if(!s(i,strlen(a)-1-i)) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%s %s",a,b);
        solve();
    }
    return 0;
}
