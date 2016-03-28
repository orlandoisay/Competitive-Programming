#include <bits/stdc++.h>

int n;

bool isBeautiful(int x) {
    int u[10];
    memset(u,0,sizeof(u));

    while(x) {
        u[x%10]++;
        x/=10;
    }

    for(int i=0;i<10;i++) {
        if(u[i]>1)
            return false;
    }

    return true;
}



int main() {
    scanf("%d",&n);
    n++;

    while(true) {
        if(isBeautiful(n)) {
            printf("%d",n);
            return 0;
        }
        n++;
    }

    return 0;
}