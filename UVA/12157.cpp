
#include <bits/stdc++.h>
using namespace std;

int t, n, x, m, j;

int main(){
    scanf("%d", &t);

    for(int k=1;k<=t;k++) {
        scanf("%d", &n);

        m = j = 0;

        while(n--) {
            scanf("%d", &x);
            m += (x/30) + 1;
            j += (x/60) + 1;
        }

        m *= 10;
        j *= 15;

        printf("Case %d:", k);

        if(m <= j) printf(" Mile");
        if(j <= m) printf(" Juice");
        printf(" %d\n", m < j ? m : j);
    }

    return 0;
}
