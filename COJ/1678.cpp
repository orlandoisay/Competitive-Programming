#include <stdio.h>

int t,r=1000,a,b,c;

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d %d %d",&a,&b,&c);

        if(a < b+c && b < a+c && c < a+b)
            r = (a+b+c < r) ? a+b+c : r;
    }

    printf("%d\n",r);
    return 0;
}
