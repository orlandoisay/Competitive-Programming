#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int N;
double MX, A, B;
char OP[2];

int main() {
    scanf("%d", &N);

    while(N--) {
        scanf("%s", OP);

        if(OP[0]=='S') {
            scanf("%lf",&A);
            MX = max(MX,PI*A*A*A*4/3);
        }
        else if(OP[0]=='C') {
            scanf("%lf %lf",&A,&B);
            MX = max(MX,PI*A*A*B*1/3);
        }
        else {
            scanf("%lf %lf",&A,&B);
            MX = max(MX,PI*A*A*B);
        }
    }

    printf("%.3f\n", MX);

    return 0;
}
