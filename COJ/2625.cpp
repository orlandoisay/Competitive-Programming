#include <stdio.h>

int a,b;
char str[]={'O','I','E'};

int main() {
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++)
            printf("%c",str[(i+j)%3]);
        printf("\n");
    }
    return 0;
}
