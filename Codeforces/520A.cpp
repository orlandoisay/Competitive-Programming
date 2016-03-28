#include <stdio.h>
#include <algorithm>
#include <string.h>

int n;
char str[150];
bool u[26];

int main() {
    scanf("%d %s",&n,str);

    for(int i=0;i<strlen(str);i++) {
        str[i] = tolower(str[i]);
        u[str[i]-'a']=true;
    }

    for(int i=0;i<26;i++) {
        if(!u[i]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}