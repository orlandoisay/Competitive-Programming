#include <bits/stdc++.h>
using namespace std;

int N,S,J,D;
char W[100005];
int RA,RB,A,B;

int main() {
    scanf("%d %d %d %d %s",&N,&S,&J,&D,W);

    for(int i = 0; i < N; i++) {
        if(W[i]=='A') {
            A++;
            if(A >= J && A-B>=D) {
                RA++;
                A=B=0;
            }
        }
        else {
            B++;
            if(B >= J && B-A>=D) {
                RB++;
                A=B=0;
            }
        }
    }

    printf("%d %d\n",RA,RB);
    return 0;
}
