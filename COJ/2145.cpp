#include <bits/stdc++.h>
using namespace std;

int n,s,a[10];

int main() {
    scanf("%d",&n);

    for(int k=1;k<=n;k++) {
        for(int i=0;i<10;i++)
            scanf("%d",&a[i]);
        sort(a,a+10);
        s=0;
        for(int i=1;i<9;i++)
            s+=a[i];
        printf("%d %d\n",k,s);
    }
    return 0;
}
