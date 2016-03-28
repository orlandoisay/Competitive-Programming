#include <stdio.h>
#include <string.h>

char str[1005];
int cr,ci=1,r[4];

int main() {
    scanf("%s",str);

    for(int i=0;i<strlen(str);i+=2) {
        r[str[i]-'0']++;
        cr++;
    }

    while(cr) {
        if(r[ci]>0) {
            printf("%d",ci);
            r[ci]--;
            cr--;
            if(cr)
                printf("+");
        }
        else
            ci++;
    }
    printf("\n");

    return 0;
}
