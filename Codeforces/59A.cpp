#include <bits/stdc++.h>
using namespace std;

int s;
char str[120];

int main() {
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++) {
        if(isupper(str[i]))
            s++;
    }

    if(s > strlen(str) - s) {
        for(int i=0;i<strlen(str);i++)
            str[i]=toupper(str[i]);
    }
    else {
        for(int i=0;i<strlen(str);i++)
            str[i]=tolower(str[i]);
    }

    printf("%s",str);


    return 0;
}