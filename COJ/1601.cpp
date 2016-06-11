#include <bits/stdc++.h>
using namespace std;

int T, I[10], R[10];
bool used[10];

int main() {
    scanf("%d",&T);

    while(T--) {
        memset(used,0,sizeof(used));
        for(int i=0;i<10;i++)
            scanf("%d",&I[i]);

        for(int i=9;i>=0;i--) {
            int X = 0;

            for(int j=9;j>=0;j--) {
                if(used[j]) continue;
                if(X == I[i]) {
                    R[i] = j;
                    used[j] = true;
                    break;
                }
                X++;
            }
        }
        for(int i=0;i<10;i++) {
            printf("%d",R[i]);
            printf("%s", (i==9) ? "\n" : " ");
        }

    }
    return 0;
}
