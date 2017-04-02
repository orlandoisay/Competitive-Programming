#include <bits/stdc++.h>
using namespace std;

int L[3];

int main() {
    for(int i=0;i<3;i++)
        scanf("%d", &L[i]);

    sort(L,L+3);

    int AB = L[0]*L[0] + L[1]*L[1];
    int C = L[2]*L[2];

    if(AB < C) printf("obtusangulo\n");
    else if(AB > C) printf("acutangulo\n");
    else printf("rectangulo\n");

    return 0;
}
