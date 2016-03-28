#include <stdio.h>
#include <string.h>

char str[200];

int main() {
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++) {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9') {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}