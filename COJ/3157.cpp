#include <stdio.h>
#define ll long long

ll n,c,o,w;
char s[100005];

int main() {
    scanf("%lld",&n);
    scanf("%s",s);

    for(int i=0;i<n;i++) {
        if(s[i]=='C')
            c++;
        if(s[i]=='O')
            o+=c;
        if(s[i]=='W')
            w+=o;
    }

    printf("%lld\n",w);

    return 0;
}
