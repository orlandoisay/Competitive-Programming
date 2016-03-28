#include <bits/stdc++.h>

int R;
bool u[26];
char c;

int main() {
    while(scanf("%c",&c)!=EOF) {
        if(isalpha(c))
            u[c-'a'] = 1;
    }

    for(int i=0;i<26;i++)
        if(u[i])
            R++;

    printf("%d",R);

    return 0;
}