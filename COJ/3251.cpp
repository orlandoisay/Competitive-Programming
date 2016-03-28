#include <bits/stdc++.h>
using namespace std;

int n,s;
char str[100005];

int main() {
    scanf("%s",str);
    n = strlen(str);
    sort(str,str+n);

    for(int i=0;i<n;i++)
        s+=(str[i]-'0');

    if(str[0]>'0' || s%3)
        printf("-1\n");
    else {
        for(int i=strlen(str)-1;i>=0;i--)
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
