#include <bits/stdc++.h>
using namespace std;

int N,id,d,m,y,c[13];

int main() {
    scanf("%d",&N);

    while(N--) {
        scanf("%d %d/%d/%d",&id,&d,&m,&y);
        c[m]++;
    }

    for(int i=1;i<=12;i++)
        printf("%d %d\n",i,c[i]);
    return 0;
}
