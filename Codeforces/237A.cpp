#include <stdio.h>

int n,a,b,c[1500],r;

int main() {
    scanf("%d",&n);

    while(n--) {
        scanf("%d %d",&a,&b);
        c[a*60+b]++;
    }

    for(int i=0;i<1500;i++)
        r = c[i] > r ? c[i] : r;

    printf("%d",r);

    return 0;
}