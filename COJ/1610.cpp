#include <bits/stdc++.h>
using namespace std;

int T, A, B;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%d %d",&A,&B);
        printf("%s\n",(B == 0) ? "Airborne wins." : "Pagfloyd wins.");
    }
    return 0;
}
