#include <bits/stdc++.h>

char str[150];

bool is_vowel(char c) {
    char s = c;

    if(isupper(s)) {
        s += 'a'-'A';
    }

    return (s == 'a' || s == 'e' ||s == 'i' ||s == 'o' ||s == 'u' || s == 'y');
}

int main() {
    scanf("%s",str);

     for(int i=0;i<strlen(str);i++) {
        if(isupper(str[i]) && !is_vowel(str[i]))
            printf(".%c",str[i]+('a'-'A'));
        else if(!is_vowel(str[i])) {
            printf(".%c",str[i]);
        }
     }

    return 0;
}