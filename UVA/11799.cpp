#include <bits/stdc++.h>
using namespace std;

int t, n, mx, x, k;

int main() {
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        mx = 0;

        while(n-- ){
            scanf("%d", &x);
            mx = x > mx ? x : mx;
        }

        printf("Case %d: %d\n",++k, mx);
    }

    return 0;
}
