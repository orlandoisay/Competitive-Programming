#include <stdio.h>

int n,r;
int a[120];

int mn,imn,mx,imx;

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    mn = a[n-1];
    mx = a[0];
    imn = n - 1;

    for(int i=0;i<n;i++) {
        if(a[i]>mx) {
            mx = a[i];
            imx = i;
        }
    }

    for(int i=n-1   ;i>=0;i--) {
        if(a[i]<mn) {
            mn = a[i];
            imn = i;
        }
    }

    r = imx + (n-1-imn);

    if(imx>imn) r--;

    printf("%d",r);

    return 0;
}