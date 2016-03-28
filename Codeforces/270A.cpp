#include <stdio.h>

int t,n;

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);

        if(360 % (180-n) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}