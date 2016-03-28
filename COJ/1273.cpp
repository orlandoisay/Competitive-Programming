#include <bits/stdc++.h>
using namespace std;

int T,A,B,C;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d %d",&A,&B,&C);
        A++;
        printf("%d\n",B*C*((A*(A+1))/2));
    }

    return 0;
}
