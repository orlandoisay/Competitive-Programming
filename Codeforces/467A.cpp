#include <stdio.h>

int n,r,a,b;

int main() {
    scanf("%d", &n);

    while(n--) {
        scanf("%d %d",&a,&b);
        if(a+2<=b)
            r++;
    }
    printf("%d",r);

    return 0;
}