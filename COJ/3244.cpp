#include <bits/stdc++.h>
using namespace std;

int n,r,x[20];

int main() {
    for(int i=0;i<8;i++) {
        scanf("%d",&r);
        x[i]=x[i+8]=r;
    }
    for(int i=0;i<8;i++) {
        int s = 0;

        for(int j=i;j<i+4;j++)
            s+=x[j];

        n = max(n,s);
    }

    printf("%d\n",n);

    return 0;
}
