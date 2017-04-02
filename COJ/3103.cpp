#include <bits/stdc++.h>
using namespace std;

int T, N, R, X, Y;

int main() {
    scanf("%d", &T);

    while(T--) {
        scanf("%d", &N);
        R = 0;

        while(N--) {
            scanf("%d %d", &X, &Y);

            int d2 = X*X+Y*Y;
            int pts = 0;

            for(int i=10;i>0;i--) {
                int r = 20 * (11-i);
                int r2 = r*r;

                if(d2 <= r2) {
                    pts = i;
                    break;
                }
            }

            R += pts;
        }
        printf("%d\n",R);
    }
}
