#include <stdio.h>

int n,x,y,t;

int main() {
    for(int i = 0 ;i < 3; i++) {
        scanf("%d",&t);
        x+=t;
    }

    for(int i = 0 ;i < 3; i++) {
        scanf("%d",&t);
        y+=t;
    }

    scanf("%d",&n);

    while(x%5)
        x++;
    while(y%10)
        y++;

    if((x/5) + (y/10) <= n)
        printf("YES");
    else
        printf("NO");

    return 0;
}