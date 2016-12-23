#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int f(int x) {
    return (x + 40) % 40;
}

int main() {

    while(true) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(!a && !b && !c && !d) break;

        printf("%d\n", 9 * (120 + f(a-b) + f(c-b) + f(c-d)));
    }

    return 0;
}
