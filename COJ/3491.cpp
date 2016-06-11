#include <bits/stdc++.h>
using namespace std;

int T;
unsigned int N;

int main() {
    scanf("%d",&T);

    while(T--) {
        scanf("%u",&N);

        printf("%u\n",~N);
    }


    return 0;
}
