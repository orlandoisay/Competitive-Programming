#include <bits/stdc++.h>
using namespace std;

int n, b, h, w, p, l, r;

int main() {
    while(scanf("%d %d %d %d", &n, &b, &h, &w)!=EOF) {
        r = b + 1;

        for(int i=0;i<h;i++) {
            scanf("%d", &p);

            for(int j=0;j<w;j++) {
                scanf("%d", &l);
                if(l >= n && n*p < r)
                    r = n*p;
            }
        }

        if(r <= b) printf("%d\n", r);
        else printf("stay home\n");
    }

    return 0;
}
