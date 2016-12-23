#include <bits/stdc++.h>
using namespace std;

int t, a, b, c;

int main() {
    scanf("%d", &t);

    for(int i=1;i<=t;i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: %s\n", i, (a<=20&&b<=20&&c<=20) ? "good" : "bad");
    }

    return 0;
}
