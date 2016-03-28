#include <stdio.h>

int n,r;

int main() {
    scanf("%d",&n);

    for(int i=1;i<n;i++)
        r += i * (n - i);

    printf("%d",r+n);

    return 0;
}