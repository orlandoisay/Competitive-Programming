#include <bits/stdc++.h>
using namespace std;

int t, x, y, n, v[105];
char s[10];

int main() {
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        x = 0;

        for(int i=1;i<=n;i++) {
            scanf("%s", s);

            if(s[0] == 'L') v[i] = -1;
            if(s[0] == 'R') v[i] = 1;

            if(s[0] == 'S') {
                scanf("%s %d",s, &y);
                v[i] = v[y];
            }

            x += v[i];
        }

        printf("%d\n", x);
    }

    return 0;
}
