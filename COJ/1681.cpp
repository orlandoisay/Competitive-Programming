#include <stdio.h>

int a,b,c;

int main() {
    scanf("%d %d %d",&a,&b,&c);

    if(!a || b*b < 4*a*c)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
