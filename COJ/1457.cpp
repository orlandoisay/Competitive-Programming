#include <stdio.h>
#define ll long long
ll A,B;

int main() {
    scanf("%lld %lld",&A,&B);

    printf("%lld\n",(A*(A-1)*B)/2);

    return 0;
}
