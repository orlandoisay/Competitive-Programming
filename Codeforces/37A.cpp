#include <stdio.h>

int n,t,a[1200],c,h;

int main() {
    scanf("%d",&n);

    while(n--) {
        scanf("%d",&t);
        a[t]++;
    }

    for(int i=0;i<1200;i++) {
        if(a[i]) {
            c++;
            h = a[i] > h ? a[i] : h;
        }
    }

    printf("%d %d",h,c);

    return 0;
}