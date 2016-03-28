#include <stdio.h>

int n,t;
double sum;

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        sum += double(t);
    }

    printf("%.13f",sum/double(n));

    return 0;
}