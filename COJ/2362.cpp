#include <stdio.h>

int t,n;

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        printf("%d\n",1+2*n*(n-1));
    }

    return 0;
}
