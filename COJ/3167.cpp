#include <stdio.h>

int t;
char s[50];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%s",s);
        int a = s[0]-'A'+1, b = s[1]-'0';

        printf("%d%d%d%d%d\n",a,b,a+b,a*b,2*(a*10+b));
    }

    return 0;
}
