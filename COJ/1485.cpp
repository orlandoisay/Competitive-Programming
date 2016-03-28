#include <bits/stdc++.h>

int main()
{
    char c[1001];

    scanf("%s",c);

    std::sort(c,c+strlen(c));

    printf("%s",c);
}
