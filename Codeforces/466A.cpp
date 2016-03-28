#include <bits/stdc++.h>
using namespace std;

int n,m,a,b;
int memo[1100];

int f(int x) {
    if(x<=0)
        return 0;

    if(memo[x]!=-1)
        return memo[x];

    memo[x] = min(a + f(x-1),b + f(x-m));
    return memo[x];
}

int main() {
    for(int i=0;i<=1000;i++)
        memo[i]=-1;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    printf("%d",f(n));

    return 0;
}