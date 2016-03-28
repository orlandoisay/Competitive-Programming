#include <stdio.h>

int t,x;

int main() {
    for(int i=0;i<5;i++) {
        scanf("%d",&x);
        t+=x;
    }

    if(t%5 || !t)
        printf("-1");
    else
        printf("%d",t/5);
    return 0;
}