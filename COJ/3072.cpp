#include <stdio.h>

int n;
int main() {
    scanf("%d",&n);

    if(n%2 || n == 2)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
