#include <bits/stdc++.h>
using namespace std;

int n,t;
stack < int > s[3];

int main() {
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        scanf("%d",&t);

        s[t-1].push(i);
    }

    printf("%d\n", min(min(s[0].size(),s[1].size()),s[2].size()));

    while(!s[0].empty() && !s[1].empty() && !s[2].empty()) {
        int a[3];

        for(int i=0;i<3;i++) {
            a[i] = s[i].top();
            s[i].pop();
        }

        printf("%d %d %d\n",a[0],a[1],a[2]);
    }

    return 0;
}