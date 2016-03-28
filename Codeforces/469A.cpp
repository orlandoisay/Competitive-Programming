#include <stdio.h>

int n,p,q,tmp;
bool levels[110];

int main() {
    scanf("%d",&n);

    scanf("%d",&p);

    while(p--) {
        scanf("%d",&tmp);
        levels[tmp]=true;
    }

    scanf("%d",&q);

    while(q--) {
        scanf("%d",&tmp);
        levels[tmp]=true;
    }

    for(int i=1;i<=n;i++) {
        if(!levels[i]) {
            printf("Oh, my keyboard!");
            return 0;
        }
    }

    printf("I become the guy.");

    return 0;
}