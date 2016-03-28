#include <bits/stdc++.h>

int n,r,a[120];

int main() {
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        scanf("%d",&r);
        a[r]=i;
    }

    for(int i=1;i<=n;i++) {
        printf("%d ",a[i]);
    }


    return 0;
}