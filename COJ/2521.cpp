#include <stdio.h>

int a,b,c;

int main() {
    while(scanf("%d %d %d",&a,&b,&c)!=EOF) {
        if(a+b+c == 1) {
            if(a) printf("A\n");
            if(b) printf("B\n");
            if(c) printf("C\n");
        }
        else if(a+b+c == 2) {
            if(!a) printf("A\n");
            if(!b) printf("B\n");
            if(!c) printf("C\n");
        }
        else
            printf("*\n");
    }

    return 0;
}
