#include <stdio.h>

int t,x,p;
char s[10];

int main() {
    scanf("%d",&t);

    while(t--) {
        scanf("%d %s %d",&x,s,&p);
        printf("%d\n",p*2-(s[0]=='e'));
    }
    return 0;
}
