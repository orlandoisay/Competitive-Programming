#include <stdio.h>
#include <string.h>

int c[5],a=1;
char str[150];

int main() {
    scanf("%s",str);

    int len = (strlen(str) + 1)/2;

    for(int i=0;i<strlen(str);i+=2)
        c[str[i]-'0']++;

    while(len) {
        len--;

        while(!c[a])
            a++;

        printf("%d",a);
            c[a]--;


        if(len)
            printf("+");
    }
    return 0;
}