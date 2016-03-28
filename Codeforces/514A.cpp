#include <bits/stdc++.h>
using namespace std;

char str[25];

int main() {
    scanf("%s",str);

    for(int i=1;i<strlen(str);i++) {
        int d = str[i]-'0';

        if(9 - d < d)
            str[i] = (9-d)+'0';
    }

    int d = str[0]-'0';

    if(9 - d < d && d!= 9)
        str[0] = (9-d)+'0';


    printf("%s",str);

    return 0;
}