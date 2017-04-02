#include <bits/stdc++.h>
#define lim 30000000
using namespace std;

int n, g[25000], r[lim + 50];

int main() {
    for(int i=1;i<=lim;i++)
        r[i]=3;

    g[0]=0;

    for(int i=1;i<=2500;i++) {
        g[i]=g[i-1]+i;
        r[g[i]]=1;
    }

    for(int i=1;i<=2500;i++) {
        for(int j=i;j<=2500;j++) {
            if(g[i]+g[j]<=lim && r[g[i]+g[j]] != 1) {
                r[g[i]+g[j]]=2;
            }
        }
    }

    while(scanf("%d",&n)!=EOF)
        printf("%d\n",r[n]);

    return 0;
}
