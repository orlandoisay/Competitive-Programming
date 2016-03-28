#include <stdio.h>

int k,n,w;
int cost;

int main() {
    scanf("%d %d %d",&k,&n,&w);

    cost = (w * w + w) / 2;
    cost *= k;

    if(cost > n)
        printf("%d",cost-n);
    else
        printf("0");

    return 0;
}