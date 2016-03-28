#include <stdio.h>

int t,n;
int f[5005];

int main() {
    f[1]=1;
    for(int i=2;i<=5000;i++) {
        f[i]=f[i-1]*i;
        while(f[i]%10==0)
            f[i]/=10;
        f[i]%=10000;
    }
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        printf("%d\n",f[n]%10);
    }
    return 0;
}
