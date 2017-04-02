#include <bits/stdc++.h>
using namespace std;

int R, B;

int main() {
    scanf("%d %d", &R, &B);

    for(int x=3;x<5000;x++)
        for(int y=x;y>=3;y--)
            if(R+B == x*y && R == 2*x + 2*y - 4) {
                printf("%d %d\n",x ,y);
                return 0;
            }


    return 0;
}
