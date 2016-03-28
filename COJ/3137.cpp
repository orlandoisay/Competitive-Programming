#include <stdio.h>

int t,a,b,c;

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c || a-b==c || a*b == c || (b>0 && a/b==c) || (b > 0 && a%b==c))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
