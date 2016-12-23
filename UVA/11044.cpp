#include <bits/stdc++.h>
using namespace std;

int t, a, b;

int main() {
    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        scanf("%d %d", &a, &b);
        a -= 2, b -= 2;

        while(a%3)a++;
        while(b%3)b++;

        printf("%d\n", (a/3)*(b/3));
    }

    return 0;
}
