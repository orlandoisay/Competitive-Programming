#include <bits/stdc++.h>
using namespace std;

int t,a,n;
int v[100005];
int r=1;

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&a);

        for(int i=0;i<a;i++)
            scanf("%d",&v[n++]);
    }

    sort(v,v+n);

    for(int i=1;i<n;i++)
        if(v[i]!=v[i-1])
            r++;

    printf("%d\n",r);

    return 0;
}
