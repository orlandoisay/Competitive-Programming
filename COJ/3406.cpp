#include <bits/stdc++.h>
using namespace std;

int t,x;
char n[2005];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%s",&n);
        x = strlen(n);
        for(int i=0;i<x;i++)
            n[i+x]='0';
        n[2*x]='\0';
        puts(n);
    }
    return 0;
}
