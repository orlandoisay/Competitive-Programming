#include <bits/stdc++.h>
using namespace std;

int n,c[2];
char pos[5];

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%s",pos);
        int x = (pos[0]+pos[1])%2;
        c[x]++;
    }

    printf("%d\n",abs(c[0]-c[1]));
    return 0;
}
