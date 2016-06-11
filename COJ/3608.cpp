#include <bits/stdc++.h>
using namespace std;

int T,H,W;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&H,&W);
        if(H != W)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
