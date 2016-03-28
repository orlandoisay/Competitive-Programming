#include <stdio.h>

int n,r,t,mx,mn;

int main() {
    scanf("%d",&n);
    scanf("%d",&t);
    mn = mx = t;

    for(int i=1;i<n;i++) {
        scanf("%d",&t);
        if(t > mx) {
            mx = t;
            r++;
        }
        if(t < mn) {
            mn = t;
            r++;
        }
    }

    printf("%d",r);

    return 0;
}