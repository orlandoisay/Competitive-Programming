#include <stdio.h>

int n,m,r,a,b;

int main() {
    scanf("%d %d",&n,&m);

    for(int i = 0; i * i <= n; i++) {
        a = i, b = n - (i * i);
        if(a * a + b == n && a + b * b == m)
            r++;
    }

    printf("%d",r);
    return 0;
}