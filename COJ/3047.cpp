#include <bits/stdc++.h>
using namespace std;

int T, A, B;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%d %d", &A, &B);
        printf("%d\n", (2*A+2*B) / __gcd(A,B));
    }
    return 0;
}
