#include <stdio.h>
#include <string.h>

char str[150];

int main() {
    scanf("%s",str);

    for(int i=0,c=0,a=str[0];i<strlen(str);i++) {
        if(str[i]==a) {
            c++;
            if(c==7) {
                printf("YES");
                return 0;
            }
        }
        else {
            a=str[i];
            c=1;
        }
    }
    printf("NO");

    return 0;
}