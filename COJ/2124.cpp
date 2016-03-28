#include <stdio.h>

int n;

int main() {
    while(scanf("%d",&n)!=EOF) {
        if(n%6==0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
