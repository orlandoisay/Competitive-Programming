#include <bits/stdc++.h>
using namespace std;

int r,sum,total;
int n,a[150];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        total+=a[i];
    }

    sort(a,a+n);
    reverse(a,a+n);

    while(sum <= total - sum) {
        sum += a[r++];
    }

    printf("%d",r);

    return 0;
}