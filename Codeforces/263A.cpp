#include <bits/stdc++.h>
using namespace std;

int x,y;

int main() {
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            int r;

            scanf("%d",&r);
            if(r) {
                x=i,y=j;
                break;
            }
        }
    }

    printf("%d",abs(x-3)+abs(y-3));

    return 0;
}