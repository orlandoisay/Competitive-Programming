#include <stdio.h>

int n,p,r,t;

int main() {
    scanf("%d",&n);

    while(n--) {
        scanf("%d",&t);

        if(t != -1)
            p += t;
        else if(p>0)
            p--;
        else
            r++;
    }

    printf("%d",r);
    return 0;
}