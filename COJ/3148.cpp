#include <stdio.h>

int t;
char s[3];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%s",s);

        if(((s[0]-'a')+(s[1]-'1'))%2==0)
            printf("WHITE\n");
        else
            printf("BLACK\n");
    }
    return 0;
}
