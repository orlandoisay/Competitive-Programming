#include <stdio.h>

int t,n;
int mx,imx;
int d[2505];

int main() {
    for(int i=1;i<=2500;i++)
        for(int j=i;j<=2500;j+=i)
            d[j]++;

    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        mx = 0;
        imx = 1;

        for(int i=1;i<=n;i++) {
            if(d[i]>mx) {
                mx = d[i];
                imx = i;
            }
        }
        printf("%d\n",imx);
    }
    return 0;
}
