#include <bits/stdc++.h>
using namespace std;

int n, a, b;
char s[100005];

int main() {
    scanf("%d %d %d", &n, &a, &b);
    scanf("%s", s);

    printf("%d\n", s[a-1] != s[b-1]);


    return 0;
}