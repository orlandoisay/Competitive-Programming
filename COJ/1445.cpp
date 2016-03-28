#include <bits/stdc++.h>
using namespace std;

int A,B,C;

int main() {
    while(true) {
        scanf("%d %d %d",&A,&B,&C);

        if(!A && !B && !C)
            break;

        if(A!=0 && B!=0 && B%A==0 && C%B==0 && B/A==C/B) {
            printf("GP %d\n",C * (C/B));
        }
        else
            printf("AP %d\n",C + (C-B));

    }

    return 0;
}
