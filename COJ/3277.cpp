#include <bits/stdc++.h>
using namespace std;

int n,a[1000005];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    for(int i=2;i<n;i++) {
        if(a[i]-a[i-1] != a[1]-a[0]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
