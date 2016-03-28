#include <stdio.h>
#include <algorithm>

int n,x,r,t;

int main() {
    scanf("%d %d",&n,&x);

    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        r+=t;
    }

    r = std::abs(r);

    while(r%x)
        r++;

    printf("%d",r/x);
    return 0;
}