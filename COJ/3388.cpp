#include <bits/stdc++.h>
using namespace std;

int invert(int x) {
    int f[10];
    memset(f,0,sizeof(f));

    while(x) {
        f[x%10]++;
        x/=10;
    }

    int r = 0;
    for(int i=1;i<=9;) {
        if(f[i]--)
            r = (r*10) + i;
        else
            i++;
    }

    return r;
}

int N,R;

int main() {
    scanf("%d",&N);
    while(N) {
        N -= invert(N);
        R++;
    }
    printf("%d\n",R);
    return 0;
}
