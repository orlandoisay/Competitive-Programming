#include <bits/stdc++.h>
using namespace std;

int l;
char str[1600];

void spaces() {
    for(int j=0;j<l;j++)
        printf("  ");
}

int main() {
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++) {
        char c = str[i];

        if(c == '{') {
            l++;
            printf("{");
            if(str[i+1] != '}')
                printf("\n");
            spaces();
        }
        else if(c == '}') {
            l--;
            printf("\n");
            spaces();
            printf("}");
        }
        else if(c == ',') {
            printf(",\n");
            spaces();
        }
        else
            printf("%c",c);

    }
    return 0;
}
