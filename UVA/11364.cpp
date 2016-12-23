#include <bits/stdc++.h>
using namespace std;

int t, n, mx, mn, x;

int main() {
    scanf("%d", &t);

    for(int k = 0; k < t; k++) {
        scanf("%d", &n);

        mx = 0, mn = 99;

        for(int i = 0; i < n; i++) {
            scanf("%d", &x);
            mx = x > mx ? x : mx;
            mn = x < mn ? x : mn;
        }

        printf("%d\n", 2 * (mx - mn));
    }

    return 0;
}
