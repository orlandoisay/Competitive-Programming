#include <bits/stdc++.h>

int s;
char str[20];

int dial(char c) {
    if(c == 'A' || c == 'B' || c == 'C')
        return 3;
    if(c == 'D' || c == 'E' || c == 'F')
        return 4;
    if(c == 'G' || c == 'H' || c == 'I')
        return 5;
    if(c == 'J' || c == 'K' || c == 'L')
        return 6;
    if(c == 'M' || c == 'N' || c == 'O')
        return 7;
    if(c == 'P' || c == 'Q' || c == 'R' || c == 'S')
        return 8;
    if(c == 'T' || c == 'U' || c == 'V')
        return 9;
    if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
        return 10;
}

int main() {
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++)
        s+=dial(str[i]);

    printf("%d\n",s);
    return 0;
}
