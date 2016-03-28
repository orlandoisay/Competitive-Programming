#include <stdio.h>

int f(int x) {
    return (x * (x+1) * (x+2))/6;
}

int n;

int main() {
    scanf("%d",&n);

    for(int i=0;;i++) {
        if(f(i)>n) {
            printf("%d",i-1);
            break;
        }
    }

    return 0;
}