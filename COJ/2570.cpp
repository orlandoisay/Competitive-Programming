#include <bits/stdc++.h>
using namespace std;

int invert(int x) {
    int r=0;

    while(x) {
        r = (r*10) + (x%10);
        x /= 10;
    }

    return r;
}

int n;

int main() {
    while(scanf("%d",&n)!=EOF) {
        if(invert(n)>n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
