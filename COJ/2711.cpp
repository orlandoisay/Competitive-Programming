#include <stdio.h>

int n,x;
int p[1005];

int main() {
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        scanf("%d",&x);
        p[x]=i;
    }

    for(int i=n;i>0;i--)
        printf("%d\n",p[i]);


    return 0;
}
