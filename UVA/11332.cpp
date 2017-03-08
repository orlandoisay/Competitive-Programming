#include <bits/stdc++.h>
using namespace std;

int n;

int g(int x) {
    int r = 0;
    while(x) r += x%10, x/=10;
    return r;
}

int main() {
    while(scanf("%d", &n) && n) {
        while(n > 9) n = g(n);
        printf("%d\n", n);
    }

    return 0;
}
