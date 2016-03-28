#include <bits/stdc++.h>
using namespace std;

int t,n,f[10005];

int main() {
    f[1]=f[2]=1;
    for(int i=3;i<=10000;i++)
        f[i] = (f[i-1]+f[i-2])%10000;
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        printf("%d %d %d\n",f[n-2],f[n-1],f[n]);
    }


    return 0;
}
