#include <stdio.h>

int N;

int p3(int x) {
    if(!x)
        return 1;
    return 3 * p3(x-1);
}

void cantor(int x) {
    if(!x) {
        printf("-");
        return;
    }
    cantor(x-1);
    for(int i=0;i<p3(x-1);i++)
        printf(" ");
    cantor(x-1);
}

int main() {
    while(scanf("%d",&N)!=EOF) {
        cantor(N);
        printf("\n");
    }
    return 0;
}
