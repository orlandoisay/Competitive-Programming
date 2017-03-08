#include <bits/stdc++.h>
using namespace std;

int t, n, v[55], l, h;

int main() {
    scanf("%d", &t);

    for(int k=1;k<=t;k++) {
        scanf("%d", &n);
        h = l = 0;

        for(int i=0;i<n;i++)
            scanf("%d", &v[i]);

        for(int i=1;i<n;i++) {
            if(v[i] > v[i-1]) h++;
            if(v[i] < v[i-1]) l++;
        }

        printf("Case %d: %d %d\n", k, h, l);
    }

    return 0;
}
