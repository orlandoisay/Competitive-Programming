#include <stdio.h>

int main() {
    int n, a, b, r;

    while(scanf("%d %d %d",&n,&a,&b)!=EOF) {
        r = n - ((n - b - 1 > a) ? n - b - 1 : a);
        printf("%d\n",r);
    }

    return 0;
}
