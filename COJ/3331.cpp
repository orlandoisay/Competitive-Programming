#include <stdio.h>
#define ll long long

ll a,b;
int main() {
    while(true) {
        scanf("%lld %lld",&a,&b);

        if(!a && !b) {
            break;
        }

        if(a<=2 && b<=2) {
            printf("0\n");
            continue;
        }

        if(b > a) {
            int t = b;
            b=a;
            a=t;
        }

        if(b==1) {
            printf("%lld\n",(a-1)*(a-2));
            continue;
        }

        printf("%lld\n",(4*(a*b-4)) + (2*((a-2)+(b-2))*(a*b-6))+((a-2)*(b-2)*(a*b-9)));
    }
    return 0;
}
