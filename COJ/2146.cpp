#include <stdio.h>
#define ll long long

ll v,d;

int main() {
    scanf("%lld %lld",&d,&v);

    if(d == (v*(v-3))/2)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
