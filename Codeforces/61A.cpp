#include <stdio.h>
#include <string.h>

char a[120], b[120];

int main() {
    scanf("%s %s",a,b);

    for(int i=0;i<strlen(a);i++) {
        if(a[i]!=b[i])
            printf("1");
        else
            printf("0");
    }
    return 0;
}