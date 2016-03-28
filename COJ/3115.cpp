#include <stdio.h>

int t,n,mx,r;
int a[1005],b[1005];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        r=mx=0;
        for(int i=0;i<n;i++) {
            scanf("%d %d",&a[i],&b[i]);
            mx = mx > a[i] + b[i] ? mx : a[i] + b[i];
        }
        for(int i=0;i<n;i++)
            r += mx - a[i] - b[i];
        printf("%d\n",r);
    }
}
