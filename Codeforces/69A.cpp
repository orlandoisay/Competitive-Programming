#include <stdio.h>

int a,b,c,x,y,z,n;

int main() {
    scanf("%d",&n);

    while(n--) {
        scanf("%d %d %d",&x,&y,&z);
        a+=x,b+=y,c+=z;
    }

    if(!a && !b && !c)
        printf("YES");
    else
        printf("NO");

    return 0;
}