#include <stdio.h>
#define pi 3.14159265359

int a,b,c;

int main() {
    while(true) {
        scanf("%d %d %d",&a,&b,&c);
        if(!a && !b && !c)
            break;

        printf("%.3f\n",a*b*c + 2*(a*b+a*c+b*c) + pi*(a+b+c +(4.0/3.0)));
    }


    return 0;
}
