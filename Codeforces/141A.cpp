#include <bits/stdc++.h>
using namespace std;

int t[26];
char a[120], b[120], c[120];

int main() {
    scanf("%s %s %s",a,b,c);

    for(int i=0;i<strlen(a);i++)
        t[a[i]-'A']++;

    for(int i=0;i<strlen(b);i++)
        t[b[i]-'A']++;

    for(int i=0;i<strlen(c);i++) {
        int k = c[i] - 'A';

        if(t[k]>0)
            t[k]--;
        else {
            printf("NO");
            return 0;
        }
    }

    for(int i=0;i<26;i++) {
        if(t[i]) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}