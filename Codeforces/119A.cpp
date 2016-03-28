#include <stdio.h>

int a[2],n;

int gcd(int a,int b) {
    if(!b)
        return a;
    return gcd(b,a%b);
}

int solve(int turn, int rest) {
    if(rest < gcd(a[turn],rest))
        return (1 - turn);

    return solve(1 - turn, rest - gcd(a[turn],rest));
}

int main() {
    scanf("%d %d %d",&a[0],&a[1],&n);
    printf("%d",solve(0,n));

    return 0;
}