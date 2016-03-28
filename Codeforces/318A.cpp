#include <stdio.h>
#define ll long long
ll n,k,mid;

int main() {
    scanf("%I64d %I64d",&n,&k);

    mid = (n+1)/2;

    if(k > mid) {
        k -=mid;
        printf("%I64d",2*k);
    }
    else {
        printf("%I64d",(2*k)-1);
    }

    return 0;
}