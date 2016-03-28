#include <bits/stdc++.h>

int n,r;
char s[1005];

void solve() {
    for(int i=1;i<strlen(s);i++) {
        if(s[i]=='D' && s[i-1]=='C') {
            return;
        }
    }
    r++;
}

int main() {
    scanf("%d",&n);

    while(n--) {
        scanf("%s",s);
        solve();
    }
    printf("%d\n",r);
    return 0;
}
