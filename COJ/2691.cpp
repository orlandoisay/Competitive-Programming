#include <bits/stdc++.h>
using namespace std;

int a,sa,b,sb,x;

int main() {
    scanf("%d %d",&a,&b);

    while(a--) {
        scanf("%d",&x);
        sa += x;
    }

    while(b--) {
        scanf("%d",&x);
        sb += x;
    }

    if(sa > sb)
        printf("first win\n");
    else if(sa < sb)
        printf("second win\n");
    else
        printf("tie\n");
    return 0;
}
