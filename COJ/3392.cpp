#include <stdio.h>

int n;

int main() {
    while(true) {
        scanf("%d",&n);
        if(!n)
            break;
        if(n<3)
            printf("0\n");
        else
            printf("%d\n",(n-2)*12);
    }
    return 0;
}