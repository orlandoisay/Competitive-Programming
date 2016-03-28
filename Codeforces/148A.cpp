#include <stdio.h>

int a[4],n,r;

int main() {
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);

    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        bool c = true;
        for(int j=0;j<4;j++)
            if(i%a[j]==0)
                c = false;
        if(!c)
            continue;
        r++;
    }

    printf("%d",n-r);
    return 0;
}