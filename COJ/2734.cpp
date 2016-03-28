#include <bits/stdc++.h>
using namespace std;

int r,n;
char s[20];


int main() {
    while(scanf("%s %d",s,&n)!=EOF) {
        if(s[0]=='s')
            r+=n;
        else
            r-=n;
    }
    printf("resultado: %d\n",r);

    return 0;
}
