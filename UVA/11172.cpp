#include <bits/stdc++.h>
using namespace std;

int t, a, b;

int main() {
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);

        printf("%s\n", a < b ? "<" : a == b ? "=" : ">");
    }

    return 0;
}
