#include <bits/stdc++.h>

char str[150];

int main() {
    scanf("%s",str);

    bool atsa = true;

    for(int i=1;i<strlen(str);i++){
        if(islower(str[i])){
            atsa = false;
            break;
        }
    }

    if(!atsa) {
        printf("%s",str);
    }
    else {
        for(int i=0;i<strlen(str);i++) {
            if(islower(str[i]))
                str[i]+= 'A' - 'a';
            else
                str[i]+= 'a' - 'A';
            printf("%c",str[i]);
        }
    }

    return 0;
}