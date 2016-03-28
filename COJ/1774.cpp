#include <bits/stdc++.h>

char str[125];
bool g=true;

int main() {
    scanf("%s",str);

    for(int i=1;i<strlen(str);i++) {
        if(isupper(str[i])) {
            g=false;
            break;
        }
    }

    if(!g) {
        for(int i=0;i<strlen(str);i++)
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
            else
                str[i]=toupper(str[i]);
    }
    printf("%s\n",str);
    return 0;
}
