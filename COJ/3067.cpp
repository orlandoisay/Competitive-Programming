#include <bits/stdc++.h>
using namespace std;

int N,Q1,Q2,TMP;
vector <int> L;

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%d",&TMP);
        L.push_back(TMP);
    }

    sort(L.begin(),L.end());

    scanf("%d %d",&Q1,&Q2);

    for(int i=0;i<Q1;i++) {
        scanf("%d",&TMP);
        if(binary_search(L.begin(),L.end(),TMP))
            printf(":)\n");
        else
            printf(":(\n");
    }

    for(int i=0;i<Q2;i++) {
        scanf("%d",&TMP);
        printf("%d\n",L[TMP-1]);
    }

    return 0;
}
