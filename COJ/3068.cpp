#include <bits/stdc++.h>
using namespace std;

int N,Q1,Q2,X;
int V[50000];

int main() {
    scanf("%d",&N);

    for(int i=0;i<N;i++)
        scanf("%d",&V[i]);

    sort(V,V+N);

    scanf("%d %d",&Q1,&Q2);

    for(int i=0;i<Q1;i++) {
        scanf("%d",&X);

        if(binary_search(V,V+N,X))
            printf(":)\n");
        else
            printf(":(\n");
    }

    for(int i=0;i<Q2;i++) {
        scanf("%d",&X);

        printf("%d\n",V[X-1]);
    }
    return 0;
}
