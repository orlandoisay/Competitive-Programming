#include <stdio.h>
#include <string.h>

int n,r,d;
char a[1200],b[1200];

int min(int x,int y) {
    return x < y ? x : y;
}

int abs(int x) {
    if(x<0)
        x*=-1;
    return x;
}

int main() {
    scanf("%d %s %s",&n,a,b);

    for(int i=0;i<n;i++) {
        d = abs(a[i]-b[i]);
        r += min(d,10-d);
    }

    printf("%d",r);

    return 0;
}