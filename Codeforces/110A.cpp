#include <bits/stdc++.h>
using namespace std;


int t;
char str[25];

int main() {
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++) {
        if(str[i] == '4' || str[i] == '7')
            t++;
    }

    if(t == 4 || t == 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}