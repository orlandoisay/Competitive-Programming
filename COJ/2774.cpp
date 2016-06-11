#include <bits/stdc++.h>
using namespace std;

int F, K, L, I, R;
bool CAMP[10005];

int main() {
    scanf("%d %d",&F,&K);

    while(K--) {
        scanf("%d %d",&L,&I);

        for(int i=L;i<=F;i+=I)
            CAMP[i] = true;
    }
    for(int i=1;i<=F;i++)
        if(!CAMP[i]) R++;

    printf("%d\n",R);
    return 0;
}
