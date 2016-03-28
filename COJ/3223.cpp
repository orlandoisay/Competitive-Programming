#include <bits/stdc++.h>
#define lim 1000000
using namespace std;

int t,n,r[lim+1];

int main() {
    for(int i=1;i<=lim;i++)
        r[i]=1;

    for(int i=2;i<=lim;i++)
        for(int j=i;j<=lim;j+=i)
            r[j]+=i;

    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        printf("%d\n",r[n]);
    }

    return 0;
}
